// TaskThink__16CFinishMeleeTask @0x14a060 size=542
typedef struct st_54a060_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
} st_54a060_1;

typedef struct st_54a060_2 {
    char padding_0[892];
    unsigned int field_37c;
    char padding_380[184];
    unsigned int field_438;
    char padding_43c[96];
    unsigned int field_49c;
    char padding_4a0[1772];
    struct st_54a060_3 *field_b8c;
    unsigned int field_b90;
} st_54a060_2;

typedef struct st_54a060_0 {
    float field_0;
} st_54a060_0;

typedef struct st_54a060_3 {
    unsigned int field_0;
} st_54a060_3;

extern st_54a060_0 *gpGlobals;

st_54a060_0 ** TaskThink__16CFinishMeleeTask(float idx)
{
    st_54a060_2 *v11;  // eax
    st_54a060_2 *v12;  // edx
    st_54a060_1 *v13;  // eax
    st_54a060_2 *v14;  // esi
    st_54a060_2 *v15;  // edx
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    char v3;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    int v6;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x20], Other Possible Types: unsigned short
    unsigned short v8;  // [bp-0x1e]
    unsigned int v9;  // [bp-0x1c]

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 892))
    {
        v11 = *(int *)(*(unsigned int *)&idx + 8);
        if (v11->field_49c == 1 || v11->field_49c == 3 || v11->field_49c == 5)
        {
            sub_48d0d0(*(int *)(*(unsigned int *)&idx + 8));
            v12 = *(int *)(*(unsigned int *)&idx + 8);
            if (v12->field_49c == 1 && (int)v12->field_438 < *(char *)(*(unsigned int *)&idx + 42))
            {
                v8 = __fnstcw();
                v7 = v8 | 0xc00;
                v6 = (int)*(float *)(*(int *)&v12->padding_0[0] + 608);
                if (v6 > 150)
                    return &gpGlobals;
            }
            if (*(short *)(*(unsigned int *)&idx + 40) != 1 && *(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1180) != 3)
            {
                if (*(short *)(*(unsigned int *)&idx + 40) != 2 && *(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1180) != 5)
                    return &gpGlobals;
                if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 1052) * 100.0 >= 30.0)
                {
                    if (!(char)sub_489f70(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 44)) || !(char)sub_489d60(idx, *(int *)(*(unsigned int *)&idx + 44)))
                        *(unsigned int *)(*(unsigned int *)&idx + 44) = 0;
                    if (!*(int *)(*(unsigned int *)&idx + 44))
                        sub_4891e0(idx);
                    if (!*(char *)(*(unsigned int *)&idx + 60))
                    {
                        if (*(int *)(*(unsigned int *)&idx + 44))
                            goto LABEL_54a206;
                        sub_488ab0(idx);
                    }
                    if (*(int *)(*(unsigned int *)&idx + 44))
                    {
LABEL_54a206:
                        sub_48b720(*(int *)(*(unsigned int *)&idx + 8), *(int *)(*(unsigned int *)&idx + 44));
                    }
                    else
                    {
                        v13 = *(unsigned int *)&idx + 48;
                        *(float *)&v6 = *(float *)(*(unsigned int *)&idx + 48);
                        *(float *)&v7 = *(float *)&v13->field_4;
                        *(float *)&v9 = *(float *)&v13->field_8;
                        v14 = *(int *)(*(unsigned int *)&idx + 8);
                        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 48);
                        *(float *)&v1 = *(float *)&v13->field_4;
                        *(float *)&v2 = *(float *)&v13->field_8;
                        sub_48a170(&v3, v14, &v0);
                        *(unsigned int *)&v14[1].padding_0[124] = v3;
                        *(unsigned int *)&v14[1].padding_0[128] = v4;
                        *(unsigned int *)&v14[1].padding_0[132] = v5;
                    }
                }
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) = 0x800;
                return &gpGlobals;
            }
            sub_48c710(*(int *)(*(unsigned int *)&idx + 8));
            v15 = *(int *)(*(unsigned int *)&idx + 8);
            if (!v15->field_b8c)
            {
                return &gpGlobals;
            }
            else if (*(int *)v15->field_b8c)
            {
                return &gpGlobals;
            }
            else if (*(float *)&v15->field_b90 >= *(float *)gpGlobals)
            {
                return &gpGlobals;
            }
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return &gpGlobals;
}

