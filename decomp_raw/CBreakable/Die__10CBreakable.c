// Die__10CBreakable @0xc2930 size=2112
typedef struct st_4c2930_6 {
    struct st_4c2930_5 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[108];
    unsigned int field_80;
} st_4c2930_6;

typedef struct st_4c2930_9 {
    char padding_0[188];
    unsigned int field_bc;
} st_4c2930_9;

typedef struct st_4c2930_8 {
    char padding_0[8];
    char field_8;
    char padding_9[187];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_4c2930_8;

typedef struct st_4c2930_5 {
    char padding_0[256];
    unsigned int field_100;
    float field_104;
} st_4c2930_5;

typedef struct st_4c2930_4 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[188];
    unsigned int field_1cc;
} st_4c2930_4;

typedef struct st_4c2930_7 {
    char padding_0[152];
    unsigned int field_98;
} st_4c2930_7;

typedef struct st_4c2930_0 {
    unsigned int field_0;
} st_4c2930_0;

extern char SUB_Remove__11CBaseEntity;
extern char _GLOBAL_OFFSET_TABLE_;
extern float g_vecAttackDir;
extern float g_616784;
extern float g_616788;
extern st_4c2930_0 *g_616878;
extern st_4c2930_0 *g_61687c;
extern st_4c2930_0 *g_616880;
extern st_4c2930_0 *g_616888;
extern st_4c2930_0 *g_616894;
extern st_4c2930_0 *g_61692c;
extern st_4c2930_7 *gpGlobals;

int Die__10CBreakable(double a0, float a1)
{
    int v31;  // eax
    st_4c2930_8 *v32;  // edx
    int v41;  // edi
    int i;  // ecx
    unsigned int v43;  // edx
    st_4c2930_4 **v44;  // ecx
    st_4c2930_6 *v46;  // ecx
    int v47;  // eax
    st_4c2930_8 *v48;  // eax
    unsigned int idx;  // ecx
    unsigned int index;  // eax
    double v35;  // mm6
    double v36;  // mm6
    st_4c2930_9 *v37;  // eax
    st_4c2930_8 *v38;  // eax
    unsigned int *v39;  // edx
    unsigned int *v40;  // edx
    unsigned int v0;  // [bp-0x4cc]
    float v1;  // [bp-0x4a4], Other Possible Types: unsigned int
    char v2;  // [bp-0x49d]
    void* v3;  // [bp-0x49c]
    float v4;  // [bp-0x9c]
    unsigned int v5;  // [bp-0x9c]
    float v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x98]
    float v8;  // [bp-0x94]
    unsigned int v9;  // [bp-0x94]
    unsigned int v10;  // [bp-0x90]
    unsigned int v11;  // [bp-0x8c]
    unsigned int v12;  // [bp-0x88]
    float v13;  // [bp-0x88]
    char v14;  // [bp-0x84]
    float v15;  // [bp-0x7c]
    float v16;  // [bp-0x78]
    float v17;  // [bp-0x74]
    float v18;  // [bp-0x70]
    float v19;  // [bp-0x6c]
    float v20;  // [bp-0x68]
    int v21;  // [bp-0x5c]
    unsigned short v22;  // [bp-0x58]
    unsigned short v23;  // [bp-0x56]
    float v24;  // [bp-0x44]
    float v25;  // [bp-0x40]
    float v26;  // [bp-0x3c]
    float v27;  // [bp-0x24]
    float v28;  // [bp-0x20]
    float v29;  // [bp-0x1c]

    v2 = 0;
    g_61692c(0.8500000238418579f, 0x3f800000);
    v23 = __fnstcw();
    v22 = v23 | 0xc00;
    v21 = (int)*(float *)(*(int *)a1 + 352);
    v31 = v21;
    if (v31 < 0)
        v31 = -v31;
    v21 = v31;
    v1 = (float)(a0 + (double)v21 / 100.0);
    if (1.0 < v1)
        v1 = 0x3f800000;
    if ((unsigned int)*(int *)(*(unsigned int *)&a1 + 108) <= 8)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *(int *)(*(unsigned int *)&a1 + 108)] - 1380540)]));
    }
    else
    {
        if (*(int *)(*(unsigned int *)&a1 + 112) == 1)
        {
            v15 = (float)(200.0 * g_vecAttackDir);
            v16 = (float)(200.0 * g_616784);
            v17 = (float)(200.0 * g_616788);
            v24 = v15;
            v25 = v16;
            v26 = v17;
        }
        else
        {
            v24 = 0;
            v25 = 0;
            v26 = 0;
        }
        v32 = *(int *)a1;
        idx = v32 + 1;
        index = &v32[1].padding_9[3];
        v4 = *(float *)&v32[1].padding_0[0] + *(float *)&v32[1].padding_9[3];
        v6 = *(float *)(idx + 4) + *(float *)(index + 4);
        v8 = *(float *)(idx + 8) + *(float *)(index + 8);
        v35 = 0.5 * v4;
        v18 = (float)v35;
        v36 = 0.5 * v6;
        v19 = (float)v36;
        v20 = (float)(0.5 * v8);
        v37 = &v32->field_8;
        v15 = (float)(v35 + *(float *)&v32->field_8);
        v16 = (float)(v36 + *(float *)&v37->padding_0[4]);
        v17 = *(float *)&v37->padding_0[8] + v20;
        v27 = v15;
        v28 = v16;
        v29 = v17;
        g_616878(4, 23, &v27, 0);
        g_616880(108);
        g_616894(v27);
        g_616894(v28);
        g_616894(v29);
        g_616894(*(float *)(*(int *)a1 + 244));
        g_616894(*(float *)(*(int *)a1 + 248));
        g_616894(*(float *)(*(int *)a1 + 252));
        g_616894(v24);
        g_616894(v25);
        g_616894(v26);
        g_616880(10);
        g_616888(*(int *)(*(unsigned int *)&a1 + 116));
        g_616880(0);
        g_616880(25);
        v0 = v2;
        g_616880(v0);
        g_61687c(v0);
        v38 = *(int *)a1;
        v39 = &v38->field_c4;
        *(float *)&v5 = *(float *)&v38->field_c4;
        *(float *)&v7 = *(float *)&v39[1];
        *(float *)&v9 = *(float *)&v39[2];
        v40 = &v38->field_d0;
        *(float *)&v10 = *(float *)&v38->field_d0;
        *(float *)&v11 = *(float *)&v40[1];
        *(float *)&v12 = *(float *)&v40[2];
        *(float *)&v9 = *(float *)&v38->field_d8;
        v13 = (float)(*(float *)&v12 + 8.0);
        v41 = sub_48dfd0(&v3, 0x100, &v5, &v10, 0x200);
        if (v41)
        {
            i = 0;
            if (0 < v41)
            {
                do
                {
                    v43 = i * 4;
                    *(char *)(*(int *)*(int *)(v43 + (char *)&v3) + 421) = *(char *)(*(int *)*(int *)(v43 + (char *)&v3) + 421) & 253;
                    *(unsigned int *)(*(int *)*(int *)(v43 + (char *)&v3) + 412) = 0;
                    i += 1;
                } while (i < v41);
            }
        }
        v44 = (st_4c2930_4 **)a1;
        *v44->field_1cc = 0;
        *v44->field_10c = 0;
        v46 = (st_4c2930_6 *)a1;
        v46->field_c = _INSERT(sub_48d150(v44, 0, 3, 0), 0, 0) | 0xffff0000;
        v46->field_10 = &SUB_Remove__11CBaseEntity;
        v46->field_0->field_104 = (float)(0.1 + *(float *)&v46->field_0->field_100);
        if (v46->field_80)
        {
            sub_48b610(&v14, v46->field_0);
            sub_48a0f0(*(int *)(*(unsigned int *)&a1 + 128) + gpGlobals->field_98, &v14, *(int *)a1 + 80, *(int *)(*(int *)a1 + 520));
        }
        v47 = sub_48df20(a1);
        if (v47 <= 0)
            return v47;
        (*(int *)(*(int *)(*(unsigned int *)&a1 + 96) + 0xcc))(&v14, a1);
        v48 = *(int *)a1;
        return sub_48c170(&v14, &v48->padding_9[71], *(int *)&v48[2].padding_9[71], *(int *)&v48[1].padding_9[159], 1);
    }
}

