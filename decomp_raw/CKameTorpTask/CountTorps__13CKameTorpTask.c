// CountTorps__13CKameTorpTask @0x152600 size=188
typedef struct st_552600_1 {
    char padding_0[12];
    unsigned int field_c;
} st_552600_1;

typedef struct st_552600_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_552600_0;

int CountTorps__13CKameTorpTask(st_552600_1 *a0)
{
    st_552600_0 **v1;  // esi
    unsigned int v2;  // edi
    st_552600_0 *v3;  // edx
    double v4;  // mm7
    double v5;  // mm6
    float v0;  // [bp-0x18]

    v1 = NULL;
    v2 = 0;
    while (1)
    {
        v1 = sub_487e80(v1, "Kame Torpedo");
        if (!v1)
            break;
        if (!(char)sub_48b140(v1) && (v3 = *v1, v3->field_198 == a0->field_c))
        {
            v4 = v3->field_20 * v3->field_20 + v3->field_24 * v3->field_24 + v3->field_28 * v3->field_28;
            v5 = sqrt(v4);
            if (isnan(v5))
                sub_487dc0(*(unsigned int *)&v4);
            else
                v4 = v5;
            v0 = (float)v4;
            if (0.0 >= v0)
                v2 += 1;
        }
    }
    return (short)v2;
}

