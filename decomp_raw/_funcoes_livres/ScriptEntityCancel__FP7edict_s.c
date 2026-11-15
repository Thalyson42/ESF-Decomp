// ScriptEntityCancel__FP7edict_s @0x115950 size=182
typedef struct st_515950_2 {
    unsigned int field_0;
} st_515950_2;

typedef struct st_515950_1 {
    char padding_0[76];
    struct st_515950_2 *field_4c;
} st_515950_1;

typedef struct st_515950_3 {
    char padding_0[96];
    struct st_515950_1 *field_60;
} st_515950_3;

typedef struct st_515950_0 {
    char padding_0[152];
    unsigned int field_98;
} st_515950_0;

extern st_515950_0 *gpGlobals;

unsigned int * ScriptEntityCancel__FP7edict_s(unsigned int *a0)
{
    unsigned int *v0;  // eax
    st_515950_3 *v1;  // edx

    v0 = sub_488af0(*(!a0 ? NULL : a0 + 32) + gpGlobals->field_98, "scripted_sequence");
    if (!v0)
    {
        v1 = sub_488810(sub_48c6d0((!a0 ? 0 : a0 + 32)) + 272);
        v0 = NULL;
        if (v1)
            v0 = v1->field_60->field_4c(v1);
        if (v0 && v0[96] == 6)
        {
            v0[168] = 2;
            v0 = sub_489520(v0);
        }
    }
    return v0;
}

