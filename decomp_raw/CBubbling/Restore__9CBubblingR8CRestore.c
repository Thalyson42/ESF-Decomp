// Restore__9CBubblingR8CRestore @0xaf280 size=84
extern int _9CBubbling.m_SaveData;

unsigned int Restore__9CBubblingR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBubbling", a0, &_9CBubbling.m_SaveData, 3));
}

