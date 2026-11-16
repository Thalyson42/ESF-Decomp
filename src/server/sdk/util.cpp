// sdk/util.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/util.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "saverestore.h"
#include <time.h>
#include "shake.h"
#include "decals.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( CBaseEntity *pEntity )
{
	if ( pEntity == NULL )
		return -1;
	return EntityIndex( pEntity->pev );
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( entvars_t *pevLookup )
{
	if ( pevLookup == NULL )
		return -1;
	return EntityIndex( ENT( pevLookup ) );
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( EOFFSET eoLookup )
{
	return EntityIndex( ENT( eoLookup ) );
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( edict_t *pentLookup )
{
	if ( !m_pdata || pentLookup == NULL )
		return -1;

	int i;
	ENTITYTABLE *pTable;

	for ( i = 0; i < m_pdata->tableCount; i++ )
	{
		pTable = m_pdata->pTable + i;
		if ( pTable->pent == pentLookup )
			return i;
	}
	return -1;
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityFromIndex
edict_t *CSaveRestoreBuffer :: EntityFromIndex( int entityIndex )
{
	if ( !m_pdata || entityIndex < 0 )
		return NULL;

	int i;
	ENTITYTABLE *pTable;

	for ( i = 0; i < m_pdata->tableCount; i++ )
	{
		pTable = m_pdata->pTable + i;
		if ( pTable->id == entityIndex )
			return pTable->pent;
	}
	return NULL;
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityFlagsSet
int	CSaveRestoreBuffer :: EntityFlagsSet( int entityIndex, int flags )
{
	if ( !m_pdata || entityIndex < 0 )
		return 0;
	if ( entityIndex > m_pdata->tableCount )
		return 0;

	m_pdata->pTable[ entityIndex ].flags |= flags;

	return m_pdata->pTable[ entityIndex ].flags;
}

// [SDK score 1.0] CSaveRestoreBuffer::BufferRewind
void CSaveRestoreBuffer :: BufferRewind( int size )
{
	if ( !m_pdata )
		return;

	if ( m_pdata->size < size )
		size = m_pdata->size;

	m_pdata->pCurrentData -= size;
	m_pdata->size -= size;
}

// [SDK score 1.0] CSaveRestoreBuffer::HashString
unsigned int CSaveRestoreBuffer :: HashString( const char *pszToken )
{
	unsigned int	hash = 0;

	while ( *pszToken )
		hash = _rotr( hash, 4 ) ^ *pszToken++;

	return hash;
}

// [SDK score 1.0] CSaveRestoreBuffer::TokenHash
unsigned short CSaveRestoreBuffer :: TokenHash( const char *pszToken )
{
	unsigned short	hash = (unsigned short)(HashString( pszToken ) % (unsigned)m_pdata->tokenCount );
	
#if _DEBUG
	static int tokensparsed = 0;
	tokensparsed++;
	if ( !m_pdata->tokenCount || !m_pdata->pTokens )
		ALERT( at_error, "No token table array in TokenHash()!" );
#endif

	for ( int i=0; i<m_pdata->tokenCount; i++ )
	{
#if _DEBUG
		static qboolean beentheredonethat = FALSE;
		if ( i > 50 && !beentheredonethat )
		{
			beentheredonethat = TRUE;
			ALERT( at_error, "CSaveRestoreBuffer :: TokenHash() is getting too full!" );
		}
#endif

		int	index = hash + i;
		if ( index >= m_pdata->tokenCount )
			index -= m_pdata->tokenCount;

		if ( !m_pdata->pTokens[index] || strcmp( pszToken, m_pdata->pTokens[index] ) == 0 )
		{
			m_pdata->pTokens[index] = (char *)pszToken;
			return index;
		}
	}
		
	// Token hash table full!!! 
	// [Consider doing overflow table(s) after the main table & limiting linear hash table search]
	ALERT( at_error, "CSaveRestoreBuffer :: TokenHash() is COMPLETELY FULL!" );
	return 0;
}

// [SDK score 1.0] CSave::WriteData
void CSave :: WriteData( const char *pname, int size, const char *pdata )
{
	BufferField( pname, size, pdata );
}

// [SDK score 1.0] CSave::WriteShort
void CSave :: WriteShort( const char *pname, const short *data, int count )
{
	BufferField( pname, sizeof(short) * count, (const char *)data );
}

// [SDK score 1.0] CSave::WriteInt
void CSave :: WriteInt( const char *pname, const int *data, int count )
{
	BufferField( pname, sizeof(int) * count, (const char *)data );
}

// [SDK score 1.0] CSave::WriteFloat
void CSave :: WriteFloat( const char *pname, const float *data, int count )
{
	BufferField( pname, sizeof(float) * count, (const char *)data );
}

// [SDK score 1.0] CSave::WriteTime
void CSave :: WriteTime( const char *pname, const float *data, int count )
{
	int i;
	Vector tmp, input;

	BufferHeader( pname, sizeof(float) * count );
	for ( i = 0; i < count; i++ )
	{
		float tmp = data[0];

		// Always encode time as a delta from the current time so it can be re-based if loaded in a new level
		// Times of 0 are never written to the file, so they will be restored as 0, not a relative time
		if ( m_pdata )
			tmp -= m_pdata->time;

		BufferData( (const char *)&tmp, sizeof(float) );
		data ++;
	}
}

// [SDK score 1.0] CSave::WriteString
void CSave :: WriteString( const char *pname, const char *pdata )
{
#ifdef TOKENIZE
	short	token = (short)TokenHash( pdata );
	WriteShort( pname, &token, 1 );
#else
	BufferField( pname, strlen(pdata) + 1, pdata );
#endif
}

// [SDK score 1.0] CSave::WriteString
void CSave :: WriteString( const char *pname, const int *stringId, int count )
{
	int i, size;

#ifdef TOKENIZE
	short	token = (short)TokenHash( STRING( *stringId ) );
	WriteShort( pname, &token, 1 );
#else
#if 0
	if ( count != 1 )
		ALERT( at_error, "No string arrays!\n" );
	WriteString( pname, (char *)STRING(*stringId) );
#endif

	size = 0;
	for ( i = 0; i < count; i++ )
		size += strlen( STRING( stringId[i] ) ) + 1;

	BufferHeader( pname, size );
	for ( i = 0; i < count; i++ )
	{
		const char *pString = STRING(stringId[i]);
		BufferData( pString, strlen(pString)+1 );
	}
#endif
}

// [SDK score 1.0] CSave::WriteVector
void CSave :: WriteVector( const char *pname, const Vector &value )
{
	WriteVector( pname, &value.x, 1 );
}

// [SDK score 1.0] CSave::WriteVector
void CSave :: WriteVector( const char *pname, const float *value, int count )
{
	BufferHeader( pname, sizeof(float) * 3 * count );
	BufferData( (const char *)value, sizeof(float) * 3 * count );
}

// [SDK score 1.0] CSave::WritePositionVector
void CSave :: WritePositionVector( const char *pname, const Vector &value )
{

	if ( m_pdata && m_pdata->fUseLandmark )
	{
		Vector tmp = value - m_pdata->vecLandmarkOffset;
		WriteVector( pname, tmp );
	}

	WriteVector( pname, value );
}

// [SDK score 1.0] CSave::WritePositionVector
void CSave :: WritePositionVector( const char *pname, const float *value, int count )
{
	int i;
	Vector tmp, input;

	BufferHeader( pname, sizeof(float) * 3 * count );
	for ( i = 0; i < count; i++ )
	{
		Vector tmp( value[0], value[1], value[2] );

		if ( m_pdata && m_pdata->fUseLandmark )
			tmp = tmp - m_pdata->vecLandmarkOffset;

		BufferData( (const char *)&tmp.x, sizeof(float) * 3 );
		value += 3;
	}
}

// [SDK score 1.0] CSave::WriteFunction
void CSave :: WriteFunction( const char *pname, void **data, int count )
{
	const char *functionName;

	functionName = NAME_FOR_FUNCTION( (uint32)*data );
	if ( functionName )
		BufferField( pname, strlen(functionName) + 1, functionName );
	else
		ALERT( at_error, "Invalid function pointer in entity!" );
}

// [SDK score 1.0] CSave::WriteEntVars
int CSave :: WriteEntVars( const char *pname, entvars_t *pev )
{
	return WriteFields( pname, pev, gEntvarsDescription, ENTVARS_COUNT );
}

// [SDK score 1.0] CSave::WriteFields
int CSave :: WriteFields( const char *pname, void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount )
{
	int				i, j, actualCount, emptyCount;
	TYPEDESCRIPTION	*pTest;
	int				entityArray[MAX_ENTITYARRAY];

	// Precalculate the number of empty fields
	emptyCount = 0;
	for ( i = 0; i < fieldCount; i++ )
	{
		void *pOutputData;
		pOutputData = ((char *)pBaseData + pFields[i].fieldOffset );
		if ( DataEmpty( (const char *)pOutputData, pFields[i].fieldSize * gSizes[pFields[i].fieldType] ) )
			emptyCount++;
	}

	// Empty fields will not be written, write out the actual number of fields to be written
	actualCount = fieldCount - emptyCount;
	WriteInt( pname, &actualCount, 1 );

	for ( i = 0; i < fieldCount; i++ )
	{
		void *pOutputData;
		pTest = &pFields[ i ];
		pOutputData = ((char *)pBaseData + pTest->fieldOffset );

		// UNDONE: Must we do this twice?
		if ( DataEmpty( (const char *)pOutputData, pTest->fieldSize * gSizes[pTest->fieldType] ) )
			continue;

		switch( pTest->fieldType )
		{
		case FIELD_FLOAT:
			WriteFloat( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_TIME:
			WriteTime( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_MODELNAME:
		case FIELD_SOUNDNAME:
		case FIELD_STRING:
			WriteString( pTest->fieldName, (int *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_CLASSPTR:
		case FIELD_EVARS:
		case FIELD_EDICT:
		case FIELD_ENTITY:
		case FIELD_EHANDLE:
			if ( pTest->fieldSize > MAX_ENTITYARRAY )
				ALERT( at_error, "Can't save more than %d entities in an array!!!\n", MAX_ENTITYARRAY );
			for ( j = 0; j < pTest->fieldSize; j++ )
			{
				switch( pTest->fieldType )
				{
					case FIELD_EVARS:
						entityArray[j] = EntityIndex( ((entvars_t **)pOutputData)[j] );
					break;
					case FIELD_CLASSPTR:
						entityArray[j] = EntityIndex( ((CBaseEntity **)pOutputData)[j] );
					break;
					case FIELD_EDICT:
						entityArray[j] = EntityIndex( ((edict_t **)pOutputData)[j] );
					break;
					case FIELD_ENTITY:
						entityArray[j] = EntityIndex( ((EOFFSET *)pOutputData)[j] );
					break;
					case FIELD_EHANDLE:
						entityArray[j] = EntityIndex( (CBaseEntity *)(((EHANDLE *)pOutputData)[j]) );
					break;
				}
			}
			WriteInt( pTest->fieldName, entityArray, pTest->fieldSize );
		break;
		case FIELD_POSITION_VECTOR:
			WritePositionVector( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_VECTOR:
			WriteVector( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_BOOLEAN:
		case FIELD_INTEGER:
			WriteInt( pTest->fieldName, (int *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_SHORT:
			WriteData( pTest->fieldName, 2 * pTest->fieldSize, ((char *)pOutputData) );
		break;

		case FIELD_CHARACTER:
			WriteData( pTest->fieldName, pTest->fieldSize, ((char *)pOutputData) );
		break;

		// For now, just write the address out, we're not going to change memory while doing this yet!
		case FIELD_POINTER:
			WriteInt( pTest->fieldName, (int *)(char *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_FUNCTION:
			WriteFunction( pTest->fieldName, (void **)pOutputData, pTest->fieldSize );
		break;
		default:
			ALERT( at_error, "Bad field type\n" );
		}
	}

	return 1;
}

// [SDK score 1.0] CSave::BufferString
void CSave :: BufferString( char *pdata, int len )
{
	char c = 0;

	BufferData( pdata, len );		// Write the string
	BufferData( &c, 1 );			// Write a null terminator
}

// [SDK score 1.0] CSave::DataEmpty
int CSave :: DataEmpty( const char *pdata, int size )
{
	for ( int i = 0; i < size; i++ )
	{
		if ( pdata[i] )
			return 0;
	}
	return 1;
}

// [SDK score 1.0] CSave::BufferField
void CSave :: BufferField( const char *pname, int size, const char *pdata )
{
	BufferHeader( pname, size );
	BufferData( pdata, size );
}

// [SDK score 1.0] CSave::BufferHeader
void CSave :: BufferHeader( const char *pname, int size )
{
	short	hashvalue = TokenHash( pname );
	if ( size > 1<<(sizeof(short)*8) )
		ALERT( at_error, "CSave :: BufferHeader() size parameter exceeds 'short'!" );
	BufferData( (const char *)&size, sizeof(short) );
	BufferData( (const char *)&hashvalue, sizeof(short) );
}

// [SDK score 1.0] CSave::BufferData
void CSave :: BufferData( const char *pdata, int size )
{
	if ( !m_pdata )
		return;

	if ( m_pdata->size + size > m_pdata->bufferSize )
	{
		ALERT( at_error, "Save/Restore overflow!" );
		m_pdata->size = m_pdata->bufferSize;
		return;
	}

	memcpy( m_pdata->pCurrentData, pdata, size );
	m_pdata->pCurrentData += size;
	m_pdata->size += size;
}

// [SDK score 1.0] CRestore::ReadField
int CRestore::ReadField( void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount, int startField, int size, char *pName, void *pData )
{
	int i, j, stringCount, fieldNumber, entityIndex;
	TYPEDESCRIPTION *pTest;
	float	time, timeData;
	Vector	position;
	edict_t	*pent;
	char	*pString;

	time = 0;
	position = Vector(0,0,0);

	if ( m_pdata )
	{
		time = m_pdata->time;
		if ( m_pdata->fUseLandmark )
			position = m_pdata->vecLandmarkOffset;
	}

	for ( i = 0; i < fieldCount; i++ )
	{
		fieldNumber = (i+startField)%fieldCount;
		pTest = &pFields[ fieldNumber ];
		if ( pTest->fieldName && !stricmp( pTest->fieldName, pName ) )
		{
			if ( !m_global || !(pTest->flags & FTYPEDESC_GLOBAL) )
			{
				for ( j = 0; j < pTest->fieldSize; j++ )
				{
					void *pOutputData = ((char *)pBaseData + pTest->fieldOffset + (j*gSizes[pTest->fieldType]) );
					void *pInputData = (char *)pData + j * gSizes[pTest->fieldType];

					switch( pTest->fieldType )
					{
					case FIELD_TIME:
						timeData = *(float *)pInputData;
						// Re-base time variables
						timeData += time;
						*((float *)pOutputData) = timeData;
					break;
					case FIELD_FLOAT:
						*((float *)pOutputData) = *(float *)pInputData;
					break;
					case FIELD_MODELNAME:
					case FIELD_SOUNDNAME:
					case FIELD_STRING:
						// Skip over j strings
						pString = (char *)pData;
						for ( stringCount = 0; stringCount < j; stringCount++ )
						{
							while (*pString)
								pString++;
							pString++;
						}
						pInputData = pString;
						if ( strlen( (char *)pInputData ) == 0 )
							*((int *)pOutputData) = 0;
						else
						{
							int string;

							string = ALLOC_STRING( (char *)pInputData );
							
							*((int *)pOutputData) = string;

							if ( !FStringNull( string ) && m_precache )
							{
								if ( pTest->fieldType == FIELD_MODELNAME )
									PRECACHE_MODEL( (char *)STRING( string ) );
								else if ( pTest->fieldType == FIELD_SOUNDNAME )
									PRECACHE_SOUND( (char *)STRING( string ) );
							}
						}
					break;
					case FIELD_EVARS:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((entvars_t **)pOutputData) = VARS(pent);
						else
							*((entvars_t **)pOutputData) = NULL;
					break;
					case FIELD_CLASSPTR:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((CBaseEntity **)pOutputData) = CBaseEntity::Instance(pent);
						else
							*((CBaseEntity **)pOutputData) = NULL;
					break;
					case FIELD_EDICT:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						*((edict_t **)pOutputData) = pent;
					break;
					case FIELD_EHANDLE:
						// Input and Output sizes are different!
						pOutputData = (char *)pOutputData + j*(sizeof(EHANDLE) - gSizes[pTest->fieldType]);
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((EHANDLE *)pOutputData) = CBaseEntity::Instance(pent);
						else
							*((EHANDLE *)pOutputData) = NULL;
					break;
					case FIELD_ENTITY:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((EOFFSET *)pOutputData) = OFFSET(pent);
						else
							*((EOFFSET *)pOutputData) = 0;
					break;
					case FIELD_VECTOR:
						((float *)pOutputData)[0] = ((float *)pInputData)[0];
						((float *)pOutputData)[1] = ((float *)pInputData)[1];
						((float *)pOutputData)[2] = ((float *)pInputData)[2];
					break;
					case FIELD_POSITION_VECTOR:
						((float *)pOutputData)[0] = ((float *)pInputData)[0] + position.x;
						((float *)pOutputData)[1] = ((float *)pInputData)[1] + position.y;
						((float *)pOutputData)[2] = ((float *)pInputData)[2] + position.z;
					break;

					case FIELD_BOOLEAN:
					case FIELD_INTEGER:
						*((int *)pOutputData) = *( int *)pInputData;
					break;

					case FIELD_SHORT:
						*((short *)pOutputData) = *( short *)pInputData;
					break;

					case FIELD_CHARACTER:
						*((char *)pOutputData) = *( char *)pInputData;
					break;

					case FIELD_POINTER:
						*((int *)pOutputData) = *( int *)pInputData;
					break;
					case FIELD_FUNCTION:
						if ( strlen( (char *)pInputData ) == 0 )
							*((int *)pOutputData) = 0;
						else
							*((int *)pOutputData) = FUNCTION_FROM_NAME( (char *)pInputData );
					break;

					default:
						ALERT( at_error, "Bad field type\n" );
					}
				}
			}
#if 0
			else
			{
				ALERT( at_console, "Skipping global field %s\n", pName );
			}
#endif
			return fieldNumber;
		}
	}

	return -1;
}

// [SDK score 1.0] CRestore::ReadEntVars
int CRestore::ReadEntVars( const char *pname, entvars_t *pev )
{
	return ReadFields( pname, pev, gEntvarsDescription, ENTVARS_COUNT );
}

// [SDK score 1.0] CRestore::ReadFields
int CRestore::ReadFields( const char *pname, void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount )
{
	unsigned short	i, token;
	int		lastField, fileCount;
	HEADER	header;

	i = ReadShort();
	ASSERT( i == sizeof(int) );			// First entry should be an int

	token = ReadShort();

	// Check the struct name
	if ( token != TokenHash(pname) )			// Field Set marker
	{
//		ALERT( at_error, "Expected %s found %s!\n", pname, BufferPointer() );
		BufferRewind( 2*sizeof(short) );
		return 0;
	}

	// Skip over the struct name
	fileCount = ReadInt();						// Read field count

	lastField = 0;								// Make searches faster, most data is read/written in the same order

	// Clear out base data
	for ( i = 0; i < fieldCount; i++ )
	{
		// Don't clear global fields
		if ( !m_global || !(pFields[i].flags & FTYPEDESC_GLOBAL) )
			memset( ((char *)pBaseData + pFields[i].fieldOffset), 0, pFields[i].fieldSize * gSizes[pFields[i].fieldType] );
	}

	for ( i = 0; i < fileCount; i++ )
	{
		BufferReadHeader( &header );
		lastField = ReadField( pBaseData, pFields, fieldCount, lastField, header.size, m_pdata->pTokens[header.token], header.pData );
		lastField++;
	}
	
	return 1;
}

// [SDK score 1.0] CRestore::BufferReadHeader
void CRestore::BufferReadHeader( HEADER *pheader )
{
	ASSERT( pheader!=NULL );
	pheader->size = ReadShort();				// Read field size
	pheader->token = ReadShort();				// Read field name token
	pheader->pData = BufferPointer();			// Field Data is next
	BufferSkipBytes( pheader->size );			// Advance to next field
}

// [SDK score 1.0] CRestore::ReadShort
short	CRestore::ReadShort( void )
{
	short tmp = 0;

	BufferReadBytes( (char *)&tmp, sizeof(short) );

	return tmp;
}

// [SDK score 1.0] CRestore::ReadInt
int	CRestore::ReadInt( void )
{
	int tmp = 0;

	BufferReadBytes( (char *)&tmp, sizeof(int) );

	return tmp;
}

// [SDK score 1.0] CRestore::ReadNamedInt
int CRestore::ReadNamedInt( const char *pName )
{
	HEADER header;

	BufferReadHeader( &header );
	return ((int *)header.pData)[0];
}

// [SDK score 1.0] CRestore::ReadNamedString
char *CRestore::ReadNamedString( const char *pName )
{
	HEADER header;

	BufferReadHeader( &header );
#ifdef TOKENIZE
	return (char *)(m_pdata->pTokens[*(short *)header.pData]);
#else
	return (char *)header.pData;
#endif
}

// [SDK score 1.0] CRestore::BufferPointer
char *CRestore::BufferPointer( void )
{
	if ( !m_pdata )
		return NULL;

	return m_pdata->pCurrentData;
}

// [SDK score 1.0] CRestore::BufferReadBytes
void CRestore::BufferReadBytes( char *pOutput, int size )
{
	ASSERT( m_pdata !=NULL );

	if ( !m_pdata || Empty() )
		return;

	if ( (m_pdata->size + size) > m_pdata->bufferSize )
	{
		ALERT( at_error, "Restore overflow!" );
		m_pdata->size = m_pdata->bufferSize;
		return;
	}

	if ( pOutput )
		memcpy( pOutput, m_pdata->pCurrentData, size );
	m_pdata->pCurrentData += size;
	m_pdata->size += size;
}

// [SDK score 1.0] CRestore::BufferSkipBytes
void CRestore::BufferSkipBytes( int bytes )
{
	BufferReadBytes( NULL, bytes );
}

// [SDK score 1.0] CRestore::BufferSkipZString
int CRestore::BufferSkipZString( void )
{
	char *pszSearch;
	int	 len;

	if ( !m_pdata )
		return 0;

	int maxLen = m_pdata->bufferSize - m_pdata->size;

	len = 0;
	pszSearch = m_pdata->pCurrentData;
	while ( *pszSearch++ && len < maxLen )
		len++;

	len++;

	BufferSkipBytes( len );

	return len;
}

// [SDK score 1.0] CRestore::BufferCheckZString
int	CRestore::BufferCheckZString( const char *string )
{
	if ( !m_pdata )
		return 0;

	int maxLen = m_pdata->bufferSize - m_pdata->size;
	int len = strlen( string );
	if ( len <= maxLen )
	{
		if ( !strncmp( string, m_pdata->pCurrentData, len ) )
			return 1;
	}
	return 0;
}
