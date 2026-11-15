// FGetNodeRoute__12CBaseMonsterG6Vector @0xd8c60 size=386
typedef struct st_4d8c60_2 {
    char padding_0[192];
    unsigned int field_c0;
} st_4d8c60_2;

typedef struct st_4d8c60_1 {
    unsigned int field_0;
    char padding_4[400];
    unsigned int field_194;
    unsigned int field_198;
    unsigned int field_19c;
    char field_1a0;
    char padding_1a1[191];
    int field_260;
} st_4d8c60_1;

typedef struct st_4d8c60_0 {
    unsigned int field_0;
} st_4d8c60_0;

extern st_4d8c60_0 *g_6168b4;
extern int WorldGraph;
extern st_4d8c60_0 *g_61716c;

unsigned int FGetNodeRoute__12CBaseMonsterG6Vector(st_4d8c60_1 *a0, unsigned int *a1)
{
    int v6;  // edi
    int v7;  // eax
    int v8;  // eax
    unsigned int v9;  // edi
    st_4d8c60_1 *v10;  // esi
    unsigned int v11;  // eax
    unsigned int v12;  // ecx
    st_4d8c60_1 *v13;  // edx
    st_4d8c60_2 *v0;  // [bp-0x58]
    unsigned int *v1;  // [bp-0x54]
    int v2;  // [bp-0x50]
    int idx;  // [bp-0x4c]
    int v4;  // [bp-0x48]
    char v5;  // [bp-0x44]

    v4 = sub_488f40(&WorldGraph, a0->field_0 + 8, a0);
    v6 = sub_488f40(&WorldGraph, a1, a0);
    if (v4 == -0x1 || v6 == -0x1)
        return 0;
    v7 = sub_488e90(&WorldGraph, a0);
    v8 = sub_48ad80(&WorldGraph, &v5, v4, v6, v7, a0->field_260);
    if (!v8)
    {
        g_6168b4(2, "No Path from %d to %d!\n", v4, v6);
    }
    else
    {
        v2 = 8;
        if (v8 <= 7)
            v2 = v8;
        idx = 0;
        if (idx < v2)
        {
            v1 = &v5;
            v0 = &a0->field_1a0;
            do
            {
                v9 = idx * 16;
                v10 = (char *)a0 + v9;
                v11 = v1[idx] * 88;
                v10->field_194 = *(int *)((char *)g_61716c + v11);
                v10->field_198 = *(int *)((char *)g_61716c + v11 + 4);
                v10->field_19c = *(int *)((char *)g_61716c + v11 + 8);
                *(unsigned int *)&v0->padding_0[v9] = 32;
                idx += 1;
            } while (idx < v2);
        }
        if (v2 > 7)
            return 1;
        v12 = v2 * 16;
        v13 = (char *)a0 + v12;
        v13->field_194 = *a1;
        v13->field_198 = a1[1];
        v13->field_19c = a1[2];
        (&a0->field_1a0)[v12] = (&a0->field_1a0)[v12] | 128;
        return 1;
    }
    return 0;
}

