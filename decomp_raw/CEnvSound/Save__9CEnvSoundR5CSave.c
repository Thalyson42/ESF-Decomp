// Save__9CEnvSoundR5CSave @0x11c4d0 size=84
extern int _9CEnvSound.m_SaveData;

unsigned int Save__9CEnvSoundR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CEnvSound", a0, &_9CEnvSound.m_SaveData, 2));
}

