// BlobTouch__5CBlobP11CBaseEntity @0xcb4e0 size=381
typedef struct st_4cb4e0_2 {
    unsigned int field_0;
} st_4cb4e0_2;

typedef struct st_4cb4e0_5 {
    char padding_0[480];
    float field_1e0;
} st_4cb4e0_5;

typedef struct st_4cb4e0_0 {
    unsigned int field_0;
    char padding_4[476];
    float field_1e0;
} st_4cb4e0_0;

typedef struct st_4cb4e0_1 {
    char padding_0[40];
    struct st_4cb4e0_2 *field_28;
    char padding_2c[472];
    struct st_4cb4e0_2 *field_204;
} st_4cb4e0_1;

typedef struct st_4cb4e0_3 {
    struct st_4cb4e0_0 *field_0;
    char padding_4[92];
    struct st_4cb4e0_1 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[24];
    unsigned int field_2cc;
} st_4cb4e0_3;

typedef struct st_4cb4e0_6 {
    struct st_4cb4e0_5 *field_0;
    char padding_4[96];
    int field_64;
} st_4cb4e0_6;

typedef struct st_4cb4e0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4cb4e0_4;

extern st_4cb4e0_4 *gpGlobals;

unsigned int BlobTouch__5CBlobP11CBaseEntity(st_4cb4e0_6 *a0, st_4cb4e0_3 *a1)
{
    unsigned int v3;  // eax
    double v4;  // mm0
    unsigned short v0;  // [bp-0x1c]
    unsigned short v1;  // [bp-0x1a]
    int v2;  // [bp-0x18]

    v3 = a1->field_60->field_28(a1);
    if (v3 != 1)
    {
        return v3;
    }
    else if (a1->field_2ac)
    {
        return v3;
    }
    else if (a1->field_2b0)
    {
        return v3;
    }
    else if (!a1->field_2cc)
    {
        if (!strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "kiblast"))
        {
            CBlob::SizeInc(a0, 25);
        }
        else if (strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "scattershot") && strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "rock"))
        {
            a0->field_0->field_1e0 = (float)(a0->field_0->field_1e0 + a1->field_0->field_1e0 / 1.5);
            a1->field_60->field_204(a1);
            v1 = __fnstcw();
            v0 = v1 | 0xc00;
            v2 = (int)((double)a0->field_64 + v4 * 0.5);
            a0->field_64 = v2;
            CBlob::Remove(a0);
        }
        return CExplodingAttack::Vaporize(a1);
    }
    else
    {
        return v3;
    }
}

