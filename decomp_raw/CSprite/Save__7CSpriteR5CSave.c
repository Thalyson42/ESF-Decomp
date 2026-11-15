// Save__7CSpriteR5CSave @0xb36d0 size=84
extern int _7CSprite.m_SaveData;

unsigned int Save__7CSpriteR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CSprite", a0, &_7CSprite.m_SaveData, 2));
}

