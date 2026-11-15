// FreeSound__9CSoundEntii @0x11efa0 size=120
typedef struct st_51efa0_0 {
    struct st_51efa0_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    unsigned int field_68;
    char padding_6c[32];
    unsigned int field_8c;
} st_51efa0_0;

extern st_51efa0_0 pSoundEnt;

st_51efa0_0 * FreeSound__9CSoundEntii(unsigned int index, unsigned int idx)
{
    unsigned int *v0;  // edx

    if (!pSoundEnt.field_0)
        return &pSoundEnt.field_0;
    if (idx != 0xffffffff)
    {
        v0 = &pSoundEnt.field_0->field_8c;
        v0[8 * idx] = v0[8 * index];
    }
    else
    {
        pSoundEnt.field_0->field_68 = (&pSoundEnt.field_0->field_8c)[8 * index];
    }
    (&pSoundEnt.field_0->field_8c)[8 * index] = pSoundEnt.field_0->field_64;
    pSoundEnt.field_0->field_64 = index;
    return pSoundEnt.field_0;
}

