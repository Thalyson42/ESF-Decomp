// DispatchTouch__FP7edict_sT0 @0x9c2d0 size=122
typedef struct st_49c2d0_4 {
    char padding_0[124];
    struct st_49c2d0_3 *field_7c;
} st_49c2d0_4;

typedef struct st_49c2d0_1 {
    char padding_0[180];
    struct st_49c2d0_2 *field_b4;
} st_49c2d0_1;

typedef struct st_49c2d0_2 {
    unsigned int field_0;
} st_49c2d0_2;

typedef struct st_49c2d0_0 {
    char padding_0[420];
    unsigned int field_1a4;
} st_49c2d0_0;

typedef struct st_49c2d0_3 {
    struct st_49c2d0_0 *field_0;
    char padding_4[92];
    struct st_49c2d0_1 *field_60;
} st_49c2d0_3;

extern unsigned int gTouchDisabled;

unsigned int * DispatchTouch__FP7edict_sT0(st_49c2d0_4 *a0, st_49c2d0_4 *a1)
{
    unsigned int *v0;  // eax
    st_49c2d0_3 *v1;  // esi
    st_49c2d0_0 **v2;  // ecx

    v0 = &gTouchDisabled;
    if (!gTouchDisabled)
    {
        v1 = (!a0 ? NULL : a0->field_7c);
        v2 = (!a1 ? NULL : a1->field_7c);
        if (v1 && v2)
        {
            v0 = v1->field_0->field_1a4 | *v2->field_1a4;
            if (!(v0 & 0x40000000))
                v0 = v1->field_60->field_b4(v1, v2);
        }
    }
    return v0;
}

