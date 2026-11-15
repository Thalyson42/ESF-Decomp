// HasPlayerItem__11CBasePlayerP15CBasePlayerItem @0xfde60 size=134
typedef struct st_4fde60_6 {
    char padding_0[132];
    unsigned int field_84;
} st_4fde60_6;

typedef struct st_4fde60_3 {
    struct st_4fde60_1 *field_0;
    char padding_4[128];
    struct st_4fde60_3 *field_84;
} st_4fde60_3;

typedef struct st_4fde60_4 {
    char padding_0[2368];
    struct st_4fde60_3 *field_940;
} st_4fde60_4;

typedef struct st_4fde60_0 {
    char padding_0[304];
    struct st_4fde60_1 *field_130;
} st_4fde60_0;

typedef struct st_4fde60_1 {
    unsigned int field_0;
} st_4fde60_1;

typedef struct st_4fde60_2 {
    struct st_4fde60_1 *field_0;
    char padding_4[92];
    struct st_4fde60_0 *field_60;
} st_4fde60_2;

typedef struct st_4fde60_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4fde60_5;

extern st_4fde60_5 *gpGlobals;

unsigned int HasPlayerItem__11CBasePlayerP15CBasePlayerItem(st_4fde60_4 *a0, st_4fde60_2 *a1)
{
    unsigned int idx;  // eax
    st_4fde60_6 *v1;  // esi
    st_4fde60_6 *v2;  // esi

    idx = a1->field_60->field_130(a1);
    v1 = (&a0->field_940)[idx];
    if ((&a0->field_940)[idx])
    {
        do
        {
            v2 = v1;
            if (!strcmp@GLIBC_2.0(gpGlobals->field_98 + *(int *)*(int *)&v2->padding_0[0], *(int *)a1->field_0 + gpGlobals->field_98))
                return 1;
        } while ((v1 = v2->field_84, v2->field_84));
    }
    return 0;
}

