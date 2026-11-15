// _._17CCounterMeleeTask @0x185a30 size=159
typedef struct st_585a30_2 {
    char padding_0[8];
    struct st_585a30_1 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_585a30_2;

typedef struct st_585a30_1 {
    char padding_0[2948];
    struct st_585a30_0 *field_b84;
    unsigned int field_b88;
} st_585a30_1;

typedef struct st_585a30_3 {
    struct st_585a30_0 *field_0;
    unsigned int field_4;
} st_585a30_3;

typedef struct st_585a30_0 {
    char padding_0[4];
    struct st_585a30_0 *field_4;
    unsigned int field_8;
} st_585a30_0;

extern char __vt_17CCounterMeleeTask;

int _._17CCounterMeleeTask(st_585a30_2 *a0, int a1)
{
    st_585a30_0 *iter;  // esi
    st_585a30_0 *v2;  // eax
    st_585a30_3 *v0;  // [bp-0x8]

    a0->field_14 = &__vt_17CCounterMeleeTask;
    CBot::AddShootDelay(a0->field_8);
    v0 = &a0->field_8->field_b84;
    iter = a0->field_8->field_b84;
    if (a0->field_8->field_b84)
    {
        do
        {
            v2 = iter;
            iter = iter->field_4;
            v2->field_4 = NULL;
            v2->field_8 = 0;
            __builtin_delete(v2);
        } while (iter);
    }
    v0->field_4 = 0;
    v0->field_0 = NULL;
    CBot::ClearMeleeComboList(a0->field_8);
    return _._9CBaseTask(a0, a1);
}

