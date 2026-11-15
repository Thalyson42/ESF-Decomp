// FreeList__9CSoundEnt @0x11f320 size=44
typedef struct st_51f320_0 {
    char padding_0[100];
    unsigned int field_64;
} st_51f320_0;

extern st_51f320_0 *pSoundEnt;

unsigned int FreeList__9CSoundEnt(void)
{
    return (!pSoundEnt ? 0xffffffff : pSoundEnt->field_64);
}

