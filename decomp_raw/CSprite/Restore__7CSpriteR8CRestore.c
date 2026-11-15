// Restore__7CSpriteR8CRestore @0xb3730 size=84
extern int _7CSprite.m_SaveData;

unsigned int Restore__7CSpriteR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CSprite", a0, &_7CSprite.m_SaveData, 2));
}

