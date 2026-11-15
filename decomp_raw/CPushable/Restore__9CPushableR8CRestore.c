// Restore__9CPushableR8CRestore @0xc3250 size=84
extern int _9CPushable.m_SaveData;

unsigned int Restore__9CPushableR8CRestore(int a0, int a1)
{
    return (!CBreakable::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CPushable", a0, &_9CPushable.m_SaveData, 2));
}

