// DelayThink__10CBaseDelay @0x122a60 size=137
typedef struct st_522a60_0 {
    char padding_0[124];
    int field_7c;
} st_522a60_0;

typedef struct st_522a60_1 {
    char padding_0[384];
    int field_180;
    char padding_184[20];
    struct st_522a60_0 *field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_522a60_1;

typedef struct st_522a60_2 {
    unsigned int field_0;
} st_522a60_2;

extern st_522a60_2 *g_616818;
extern st_522a60_2 *g_6168d4;

int DelayThink__10CBaseDelay(st_522a60_1 **a0)
{
    int v0;  // edx
    st_522a60_0 *v1;  // eax

    v0 = 0;
    if (*a0->field_198)
    {
        v1 = *a0->field_198;
        if (*a0->field_198 || (v1 = g_6168d4(0), v1))
            v0 = v1->field_7c;
        else
            v0 = 0;
    }
    sub_48d150(a0, v0, *a0->field_180, 0);
    return g_616818(*a0->field_208);
}

