// SequenceDone__12CCineMonsterP12CBaseMonster @0x1156e0 size=130
typedef struct st_5156e0_2 {
    unsigned int field_0;
} st_5156e0_2;

typedef struct st_5156e0_0 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_5156e0_0;

typedef struct st_5156e0_1 {
    char padding_0[516];
    struct st_5156e0_2 *field_204;
} st_5156e0_1;

typedef struct st_5156e0_3 {
    struct st_5156e0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_5156e0_1 *field_60;
} st_5156e0_3;

typedef struct st_5156e0_4 {
    float field_0;
} st_5156e0_4;

extern char SUB_Remove__11CBaseEntity;
extern st_5156e0_4 *gpGlobals;

int SequenceDone__12CCineMonsterP12CBaseMonster(st_5156e0_3 *a0, int a1)
{
    st_5156e0_0 *v0;  // ecx

    v0 = a0->field_0;
    if (!(v0->field_1a0 & 4))
    {
        a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
        a0->field_10 = &SUB_Remove__11CBaseEntity;
        v0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    }
    sub_489520(a1);
    a0->field_60->field_204(a0, a1);
    return sub_48d150(a0, 0, 3, 0);
}

