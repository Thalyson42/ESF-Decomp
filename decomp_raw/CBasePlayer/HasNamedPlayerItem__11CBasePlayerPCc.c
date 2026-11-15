// HasNamedPlayerItem__11CBasePlayerPCc @0xfdef0 size=111
typedef struct st_4fdef0_4 {
    char padding_0[132];
    unsigned int field_84;
} st_4fdef0_4;

typedef struct st_4fdef0_0 {
    struct st_4fdef0_1 *field_0;
    char padding_4[128];
    struct st_4fdef0_0 *field_84;
} st_4fdef0_0;

typedef struct st_4fdef0_2 {
    char padding_0[2368];
    struct st_4fdef0_0 *field_940;
} st_4fdef0_2;

typedef struct st_4fdef0_1 {
    unsigned int field_0;
} st_4fdef0_1;

typedef struct st_4fdef0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4fdef0_3;

extern st_4fdef0_3 *gpGlobals;

unsigned int HasNamedPlayerItem__11CBasePlayerPCc(st_4fdef0_2 *a0, int a1)
{
    int idx;  // edi
    st_4fdef0_4 *v1;  // esi
    st_4fdef0_4 *v2;  // esi

    idx = 0;
    do
    {
        v1 = (&a0->field_940)[idx];
        if ((&a0->field_940)[idx])
        {
            do
            {
                v2 = v1;
                if (!strcmp@GLIBC_2.0(a1, *(int *)*(int *)&v2->padding_0[0] + gpGlobals->field_98))
                    return 1;
            } while ((v1 = v2->field_84, v2->field_84));
        }
    } while ((idx += 1, idx <= 9));
    return 0;
}

