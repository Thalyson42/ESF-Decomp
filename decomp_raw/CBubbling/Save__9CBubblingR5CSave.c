// Save__9CBubblingR5CSave @0xaf220 size=84
extern int _9CBubbling.m_SaveData;

unsigned int Save__9CBubblingR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBubbling", a0, &_9CBubbling.m_SaveData, 3));
}

