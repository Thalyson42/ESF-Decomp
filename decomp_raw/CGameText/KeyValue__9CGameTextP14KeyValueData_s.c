// KeyValue__9CGameTextP14KeyValueData_s @0xcf450 size=2500
typedef struct st_4cf450_1 {
    char padding_0[104];
    float field_68;
    float field_6c;
    unsigned int field_70;
    char field_74;
    char field_75;
    char field_76;
    char field_77;
    char field_78;
    char field_79;
    char field_7a;
    char field_7b;
    float field_7c;
    float field_80;
    float field_84;
    float field_88;
    unsigned int field_8c;
} st_4cf450_1;

typedef struct st_4cf450_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4cf450_0;

unsigned int KeyValue__9CGameTextP14KeyValueData_s(st_4cf450_1 *a0, st_4cf450_0 *a1)
{
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v14;  // eax
    double v15;  // mm7
    unsigned int v16;  // eax
    double v17;  // mm7
    unsigned int v18;  // eax
    double v19;  // mm7
    unsigned int v20;  // eax
    double v21;  // mm7
    double v6;  // mm7
    unsigned int v7;  // eax
    double v8;  // mm7
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x24]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x1c]

    if (!sub_488af0(a1->field_4, "channel"))
    {
        v4 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_8c = v4;
        a1->field_c = 1;
        return v4;
    }
    else if (!sub_488af0(a1->field_4, L"xy晥敦瑣挀汯牯挀汯牯2慦敤湩昀摡潥瑵栀汯瑤浩e硦楴敭琀慥業摮硥琀楲杧牥瑳瑡e"))
    {
        v5 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_68 = (float)v6;
        a1->field_c = 1;
        return v5;
    }
    else if (!sub_488af0(a1->field_4, "y"))
    {
        v7 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_6c = (float)v8;
        a1->field_c = 1;
        return v7;
    }
    else if (!sub_488af0(a1->field_4, "effect"))
    {
        v9 = sub_48b500(a1->field_8, 0, 10, 0);
        a0->field_70 = v9;
        a1->field_c = 1;
        return v9;
    }
    else if (!sub_488af0(a1->field_4, "color"))
    {
        v10 = sub_48c320(&v0, 4, a1->field_8);
        a0->field_74 = v0;
        a0->field_75 = v1;
        a0->field_76 = v2;
        v11 = _INSERT(v10, 0, v3);
        a0->field_77 = v3;
        a1->field_c = 1;
        return v11;
    }
    else if (!sub_488af0(a1->field_4, "color2"))
    {
        v12 = sub_48c320(&v0, 4, a1->field_8);
        a0->field_78 = v0;
        a0->field_79 = v1;
        a0->field_7a = v2;
        v13 = _INSERT(v12, 0, v3);
        a0->field_7b = v3;
        a1->field_c = 1;
        return v13;
    }
    else if (!sub_488af0(a1->field_4, "fadein"))
    {
        v14 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_7c = (float)v15;
        a1->field_c = 1;
        return v14;
    }
    else if (!sub_488af0(a1->field_4, "fadeout"))
    {
        v16 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_80 = (float)v17;
        a1->field_c = 1;
        return v16;
    }
    else if (!sub_488af0(a1->field_4, "holdtime"))
    {
        v18 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_84 = (float)v19;
        a1->field_c = 1;
        return v18;
    }
    else if (!sub_488af0(a1->field_4, "fxtime"))
    {
        v20 = sub_487fc0(a1->field_8, 0, 0);
        a0->field_88 = (float)v21;
        a1->field_c = 1;
        return v20;
    }
    else
    {
        return sub_489590(a0, a1);
    }
}

