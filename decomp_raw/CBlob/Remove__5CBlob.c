// Remove__5CBlob @0xcb210 size=463
typedef struct st_4cb210_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[388];
    struct st_4cb210_1 *field_190;
} st_4cb210_3;

typedef struct st_4cb210_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[388];
    struct st_4cb210_1 *field_198;
} st_4cb210_2;

typedef struct st_4cb210_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4cb210_4;

typedef struct st_4cb210_1 {
    char padding_0[648];
    unsigned int field_288;
} st_4cb210_1;

typedef struct st_4cb210_0 {
    unsigned int field_0;
} st_4cb210_0;

extern unsigned int gmsgBlobKill;
extern st_4cb210_0 *g_616878;
extern st_4cb210_0 *g_61687c;
extern st_4cb210_0 *g_616888;
extern st_4cb210_0 *g_6168d4;
extern st_4cb210_0 *g_6168dc;
extern char g_800000;

int Remove__5CBlob(float a0)
{
    st_4cb210_2 *v12;  // edx
    st_4cb210_3 *v13;  // eax
    unsigned int *v22;  // edx
    st_4cb210_4 *v14;  // edx
    unsigned int v15;  // eax
    st_4cb210_2 *v16;  // eax
    st_4cb210_4 *v17;  // edx
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    unsigned int v20;  // esi
    int idx;  // ecx
    float v0;  // [bp-0x70]
    float v1;  // [bp-0x6c]
    unsigned int v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x64]
    float v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x24]
    unsigned short v8;  // [bp-0xc]
    unsigned short v9;  // [bp-0xa]
    int v10;  // [bp-0x8]

    v9 = __fnstcw();
    v8 = v9 | 0xc00;
    v10 = (int)((double)*(int *)(*(unsigned int *)&a0 + 100) + (double)*(int *)(*(unsigned int *)&a0 + 100) * 0.85);
    *(int *)(*(unsigned int *)&a0 + 100) = v10;
    v12 = *(int *)a0;
    v13 = &v12->field_8;
    *(float *)&v5 = *(float *)&v12->field_8;
    *(float *)&v6 = *(float *)&v13->field_4;
    *(float *)&v7 = *(float *)&v13->field_8;
    v3 = &g_800000;
    v2 = 0;
    v1 = (float)*(int *)(*(unsigned int *)&a0 + 100);
    v4 = (float)(2.5 * *(float *)&v12[1].padding_14[48]);
    v0 = v4;
    v14 = &v12->field_198->padding_0[128];
    if (!v12->field_198)
        v14 = NULL;
    sub_48ab00(&v5, *(int *)a0, v14);
    g_616878(2, gmsgBlobKill, 0, 0);
    v15 = g_6168dc(*(int *)(*(int *)a0 + 520));
    g_616888(v15);
    g_616888(*(int *)(*(unsigned int *)&a0 + 100));
    g_61687c();
    v16 = *(int *)a0;
    if (!v16->field_198)
        return v16;
    v17 = &v16->field_198->padding_0[128];
    if (!v16->field_198)
        v17 = NULL;
    v18 = v17->field_208;
    if (v17->field_208 || (v18 = g_6168d4(0), v18))
        v19 = *(int *)(v18 + 124);
    else
        v19 = 0;
    v20 = v19;
    idx = 0;
    do
    {
        v22 = v20 + idx * 12;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v22[425] = v5;
        v22[426] = v6;
        v22[427] = v7;
        *(float *)(v20 + 1424 + idx * 4) = -1.0f;
        idx += 1;
    } while (idx <= 1);
    return sub_48cc00(a0);
}

