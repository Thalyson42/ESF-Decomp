// ActiveList__9CSoundEnt @0x11f2f0 size=44
typedef struct st_51f2f0_0 {
    char padding_0[104];
    unsigned int field_68;
} st_51f2f0_0;

extern st_51f2f0_0 *pSoundEnt;

unsigned int ActiveList__9CSoundEnt(void)
{
    return (!pSoundEnt ? 0xffffffff : pSoundEnt->field_68);
}

