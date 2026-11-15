// SetMovementFlags__12CPlayerMeleeRi @0x105740 size=205
typedef struct st_505740_1 {
    char padding_0[292];
    struct st_505740_2 *field_124;
} st_505740_1;

typedef struct st_505740_0 {
    char padding_0[384];
    char field_180[4];
    char field_181;
} st_505740_0;

typedef struct st_505740_2 {
    struct st_505740_0 *field_0;
} st_505740_2;

unsigned int SetMovementFlags__12CPlayerMeleeRi(st_505740_1 *a0, void* a1)
{
    st_505740_0 *v0;  // edx
    unsigned int v1;  // edi
    unsigned int v2;  // esi
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    v0 = *(int *)a0->field_124;
    v1 = (v0->field_180 & 640) != 0;
    v2 = (v0->field_180[1] & 5) != 0;
    v3 = (unsigned int)(v0->field_180 & 16);
    v4 = (unsigned int)(v0->field_180 & 8);
    if (v1)
    {
        if (v4)
        {
            *(char *)a1 = *(char *)a1 | 0x88;
            return v3;
        }
        else if (v1 && v3)
        {
            *(char *)a1 = *(char *)a1 | 144;
            return v3;
        }
    }
    if (v2)
    {
        if (v4)
        {
            *(unsigned int *)a1 = *(int *)a1 | 264;
            return v3;
        }
        else if (v2 && v3)
        {
            *(unsigned int *)a1 = *(int *)a1 | 272;
            return v3;
        }
    }
    if (v1)
    {
        *(char *)a1 = *(char *)a1 | 128;
        return v3;
    }
    else if (v2)
    {
        *(char *)&a1[1] = (char)a1[1] | 1;
        return v3;
    }
    else if (v3)
    {
        *(char *)a1 = *(char *)a1 | 16;
        return v3;
    }
    else
    {
        if (!v4)
            return v3;
        *(char *)a1 = *(char *)a1 | 8;
        return v3;
    }
}

