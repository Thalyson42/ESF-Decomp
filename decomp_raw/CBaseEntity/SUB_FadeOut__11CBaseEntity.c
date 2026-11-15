// SUB_FadeOut__11CBaseEntity @0xa5030 size=147
typedef struct st_4a5030_2 {
    struct st_4a5030_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4a5030_2;

typedef struct st_4a5030_1 {
    char padding_0[260];
    float field_104;
    char padding_108[68];
    unsigned int field_14c;
} st_4a5030_1;

typedef struct st_4a5030_0 {
    float field_0;
} st_4a5030_0;

extern char SUB_Remove__11CBaseEntity;
extern st_4a5030_0 *gpGlobals;

unsigned int * SUB_FadeOut__11CBaseEntity(st_4a5030_2 *a0)
{
    st_4a5030_1 *v0;  // edx
    unsigned int v1;  // eax

    v0 = a0->field_0;
    if (7.0 >= *(float *)&v0->field_14c)
    {
        a0->field_0->field_14c = 0;
        a0->field_0->field_104 = (float)(0.2 + *(float *)gpGlobals);
        v1 = _INSERT(gpGlobals, 0, 0);
        a0->field_c = v1 | 0xffff0000;
        a0->field_10 = &SUB_Remove__11CBaseEntity;
        return v1 | 0xffff0000;
    }
    *(float *)&v0->field_14c = (float)(*(float *)&v0->field_14c - 7.0);
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

