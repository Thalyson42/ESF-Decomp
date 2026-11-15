// SetMoveAwayDir__13CKameTorpTask @0x152350 size=675
typedef struct st_552350_0 {
    unsigned int field_0;
} st_552350_0;

extern st_552350_0 *g_616928;

char SetMoveAwayDir__13CKameTorpTask(void* a0)
{
    char v3;  // dl
    char v4;  // al
    char v5;  // al
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    char v2;  // [bp-0x5]

    *(unsigned int *)&a0[28] = 0;
    v2 = 0;
    v3 = g_616928(0, 2);
    if (v3)
    {
        if (v3 == 1)
        {
            if (!(char)sub_487c70((int)a0[12], 16, 35.0f))
            {
                *(char *)&a0[28] = (char)a0[28] | 16;
                v2 = 1;
                goto LABEL_552442;
            }
            else if (!(char)sub_487c70((int)a0[12], 8, 35.0f))
            {
                goto LABEL_552409;
            }
        }
        else
        {
            if (!(char)sub_487c70((int)a0[12], 8, 35.0f))
            {
LABEL_552409:
                *(char *)&a0[28] = (char)a0[28] | 8;
                v2 = 1;
LABEL_552442:
                v1 = 2;
                v0 = 0;
                goto LABEL_55245e;
            }
            else if (!(char)sub_487c70((int)a0[12], 16, 35.0f))
            {
                *(char *)&a0[28] = (char)a0[28] | 16;
                v2 = 1;
            }
        }
    }
    if (v2)
        goto LABEL_552442;
    v1 = 2;
    v0 = 1;
LABEL_55245e:
    v4 = g_616928(v0, v1);
    if (v4)
    {
        if (v4 == 1)
        {
            if (!(char)sub_487c70((int)a0[12], 2, 35.0f))
            {
                *(char *)&a0[28] = (char)a0[28] | 2;
                v2 = 1;
                goto LABEL_552520;
            }
            else if (!(char)sub_487c70((int)a0[12], 4, 35.0f))
            {
                goto LABEL_5524e7;
            }
        }
        else
        {
            if (!(char)sub_487c70((int)a0[12], 4, 35.0f))
            {
LABEL_5524e7:
                *(char *)&a0[28] = (char)a0[28] | 4;
                v2 = 1;
LABEL_552520:
                v1 = 2;
                v0 = 0;
                goto LABEL_55253d;
            }
            else if (!(char)sub_487c70((int)a0[12], 2, 35.0f))
            {
                *(char *)&a0[28] = (char)a0[28] | 2;
                v2 = 1;
            }
        }
    }
    if (v2)
        goto LABEL_552520;
    v1 = 2;
    v0 = 1;
LABEL_55253d:
    v5 = g_616928(v0, v1);
    if (!v5)
        return v2;
    if (v5 == 1)
    {
        if (!(char)sub_487c70((int)a0[12], 32, 35.0f))
            goto LABEL_5525df;
        if ((char)sub_487c70((int)a0[12], 64, 35.0f))
            return v2;
LABEL_552593:
        *(char *)&a0[28] = (char)a0[28] | 64;
    }
    else
    {
        if (!(char)sub_487c70((int)a0[12], 64, 35.0f))
            goto LABEL_552593;
        if ((char)sub_487c70((int)a0[12], 32, 35.0f))
            return v2;
LABEL_5525df:
        *(char *)&a0[28] = (char)a0[28] | 32;
    }
    v2 = 1;
    return v2;
}

