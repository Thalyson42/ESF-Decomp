// UpdateOnRemove__11CBaseEntity @0x122150 size=130
typedef struct st_522150_0 {
    char padding_0[4];
    int field_4;
    char padding_8[414];
    char field_1a6;
} st_522150_0;

extern unsigned int WorldGraph+16;
extern int WorldGraph+28;
extern int gGlobalState;

st_522150_0 * UpdateOnRemove__11CBaseEntity(st_522150_0 **a0)
{
    int v0;  // esi
    unsigned int v1;  // edx
    st_522150_0 *v2;  // eax

    if (*a0->field_1a6 & 1)
    {
        v0 = 0;
        if (0 < WorldGraph+28)
        {
            do
            {
                v1 = v0 * 24;
                if (*(int *)(WorldGraph+16 + v1 + 8) == *a0)
                    *(unsigned int *)(WorldGraph+16 + v1 + 8) = 0;
            } while ((v0 += 1, v0 < WorldGraph+28));
        }
    }
    v2 = *a0;
    if (v2->field_4)
        v2 = CGlobalState::EntitySetState(&gGlobalState, v2->field_4, 2);
    return v2;
}

