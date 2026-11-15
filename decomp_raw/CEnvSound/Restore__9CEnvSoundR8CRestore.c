// Restore__9CEnvSoundR8CRestore @0x11c530 size=84
extern int _9CEnvSound.m_SaveData;

unsigned int Restore__9CEnvSoundR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CEnvSound", a0, &_9CEnvSound.m_SaveData, 2));
}

