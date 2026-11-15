// IsTriggered__12CMultiSourceP11CBaseEntity @0x95bc0 size=137
typedef struct st_495bc0_0 {
    char padding_0[416];
    char field_1a0;
} st_495bc0_0;

typedef struct st_495bc0_1 {
    struct st_495bc0_0 *field_0;
    char padding_4[352];
    unsigned int field_164;
    char padding_168[124];
    int field_1e4;
    int field_1e8;
} st_495bc0_1;

extern int gGlobalState;

unsigned int IsTriggered__12CMultiSourceP11CBaseEntity(st_495bc0_1 *a0)
{
    int v0;  // edx
    unsigned int *v1;  // eax

    v0 = 0;
    if (!(a0->field_0->field_1a0 & 1))
    {
        if (0 < a0->field_1e4)
        {
            v1 = &a0->field_164;
            if (*v1)
            {
                do
                {
                    v0 += 1;
                } while (v0 < a0->field_1e4 && v1[v0]);
            }
        }
        if (v0 == a0->field_1e4 && (!a0->field_1e8 || CGlobalState::EntityGetState(&gGlobalState, a0->field_1e8) == 1))
            return 1;
    }
    return 0;
}

