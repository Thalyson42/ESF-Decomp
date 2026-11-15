// IsMoving__11CBaseEntity @0x9dd40 size=105
typedef struct st_49dd40_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_49dd40_0;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

int IsMoving__11CBaseEntity(st_49dd40_0 **a0)
{
    unsigned int *v0;  // ecx
    unsigned int v1;  // esi

    v0 = &*a0->field_20;
    v1 = 0;
    if (*(float *)&g_vecZero == *a0->field_20 && *(float *)&g_vecZero+4 == *(float *)&v0[1])
        v1 = *(float *)&g_vecZero+8 == *(float *)&v0[2];
    return v1 ^ 1;
}

