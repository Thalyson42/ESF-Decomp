// Restore__17CScriptedSentenceR8CRestore @0x1162d0 size=84
extern int _17CScriptedSentence.m_SaveData;

unsigned int Restore__17CScriptedSentenceR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CScriptedSentence", a0, &_17CScriptedSentence.m_SaveData, 9));
}

