// IsFull__14CPowerStruggle @0x10d9f0 size=71
typedef struct st_50d9f0_0 {
    char padding_0[688];
    int field_2b0;
} st_50d9f0_0;

extern float multipleps+12;

unsigned int IsFull__14CPowerStruggle(st_50d9f0_0 *a0)
{
    if (a0->field_2b0 > 1 && multipleps+12 == 0.0f)
        return 1;
    return 0;
}

