// Save__17CScriptedSentenceR5CSave @0x116270 size=84
extern int _17CScriptedSentence.m_SaveData;

unsigned int Save__17CScriptedSentenceR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CScriptedSentence", a0, &_17CScriptedSentence.m_SaveData, 9));
}

