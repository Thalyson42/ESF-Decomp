// ImpulseCommands__11CBasePlayer @0xfc480 size=649
typedef struct st_4fc480_3 {
    char padding_0[380];
    unsigned int field_17c;
} st_4fc480_3;

typedef struct st_4fc480_2 {
    char padding_0[388];
    unsigned int field_184;
} st_4fc480_2;

typedef struct st_4fc480_1 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4fc480_1;

typedef struct st_4fc480_0 {
    unsigned int field_0;
} st_4fc480_0;

extern float g_5bd0f4;
extern unsigned int gmsgLogo;
extern st_4fc480_0 *g_616878;
extern st_4fc480_0 *g_61687c;
extern st_4fc480_0 *g_616880;
extern st_4fc480_0 *g_6168ec;
extern st_4fc480_1 *gpGlobals;

int ImpulseCommands__11CBasePlayer(float a0)
{
    unsigned int v18;  // eax
    st_4fc480_2 *v19;  // edx
    st_4fc480_3 *v20;  // esi
    unsigned int *v21;  // ecx
    double v22;  // mm5
    double v23;  // mm5
    int v24;  // eax
    st_4fc480_2 *v25;  // eax
    unsigned int v0;  // [bp-0x10c]
    st_4fc480_1 **v1;  // [bp-0xdc]
    unsigned int v2;  // [bp-0xd8]
    float v3;  // [bp-0xc4]
    float v4;  // [bp-0xc0]
    float v5;  // [bp-0xbc]
    float v6;  // [bp-0xa4]
    float v7;  // [bp-0xa0]
    float v8;  // [bp-0x9c]
    float v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    char v15;  // [bp-0x44]
    float v16;  // [bp-0x34]

    sub_48e140(a0);
    v18 = *(int *)(*(int *)a0 + 388);
    switch (v18)
    {
    case 100: case 201:
        v1 = &gpGlobals;
        if (gpGlobals->field_0 >= *(float *)(*(unsigned int *)&a0 + 2456))
        {
            sub_48a800(*(int *)a0 + 116);
            v19 = *(int *)a0;
            v20 = &v19->padding_0[8];
            v9 = *(float *)&v19->padding_0[8] + *(float *)&v19->padding_0[372];
            v10 = *(float *)&v20->padding_0[4] + *(float *)&v19->padding_0[376];
            v11 = *(float *)&v20->padding_0[8] + *(float *)&v19->padding_0[380];
            v21 = &*v1->field_28;
            v22 = 128.0 * *v1->field_28;
            v6 = (float)v22;
            v23 = 128.0 * *(float *)&v21[1];
            v7 = (float)v23;
            v8 = (float)(128.0 * *(float *)&v21[2]);
            v12 = (float)(v22 + v9);
            v13 = (float)(v23 + v10);
            v14 = v11 + v8;
            v3 = *(float *)&v19->padding_0[8] + *(float *)&v19->padding_0[372];
            v4 = *(float *)&v20->padding_0[4] + *(float *)&v19->padding_0[376];
            v5 = *(float *)&v20->padding_0[8] + *(float *)&v19->padding_0[380];
            sub_487b80(&v3, &v12, 1, *(int *)&v19[1].padding_0[128], &v15);
            if (v16 != 1.0f)
            {
                *(float *)(*(unsigned int *)&a0 + 2456) = *v1->field_0 + g_5bd0f4;
                v24 = sub_48d290(0);
                sub_48bd70(v24, *(int *)a0);
                break;
            }
        }
        break;
    case 99:
        if (!gmsgLogo)
        {
            v2 = 1;
            gmsgLogo = g_6168ec("Logo", 1);
        }
        else
        {
            v2 = 0;
        }
        g_616878(1, gmsgLogo, 0, *(int *)(*(int *)a0 + 520));
        v0 = v2;
        g_616880(v0);
        g_61687c(v0);
        if (!v2)
        {
            gmsgLogo = 0;
            break;
        }
        break;
    default:
        sub_48bc00(a0, v18);
    }
    v25 = *(int *)a0;
    v25->field_184 = 0;
    return v25;
}

