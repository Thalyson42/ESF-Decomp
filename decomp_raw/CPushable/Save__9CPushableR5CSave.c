// Save__9CPushableR5CSave @0xc31f0 size=84
extern int _9CPushable.m_SaveData;

unsigned int Save__9CPushableR5CSave(int a0, int a1)
{
    return (!CBreakable::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CPushable", a0, &_9CPushable.m_SaveData, 2));
}

