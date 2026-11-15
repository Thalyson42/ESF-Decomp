// Restore__12CBaseMonsterR8CRestore @0xd3b60 size=159
typedef struct st_4d3b60_0 {
    char padding_0[260];
    unsigned int field_104;
    char field_108;
    char padding_109[107];
    unsigned int field_174;
    char padding_178[16];
    unsigned int field_188;
    unsigned int field_18c;
} st_4d3b60_0;

extern int _12CBaseMonster.m_SaveData;

unsigned int Restore__12CBaseMonsterR8CRestore(st_4d3b60_0 *a0, int a1)
{
    unsigned int v0;  // edi

    if (!sub_489eb0(a0, a1))
        return 0;
    v0 = sub_48a980(a1, "CBaseMonster", a0, &_12CBaseMonster.m_SaveData, 37);
    sub_48bce0(a0);
    a0->field_18c = 0;
    a0->field_188 = 0;
    a0->field_174 = 0;
    if (sub_48d8b0(&a0->field_108))
        return v0;
    a0->field_104 = 0;
    return v0;
}

