// ResetSequenceInfo__14CBaseAnimating @0x8e610 size=137
typedef struct st_48e610_2 {
    char padding_0[312];
    unsigned int field_138;
} st_48e610_2;

typedef struct st_48e610_0 {
    float field_0;
} st_48e610_0;

typedef struct st_48e610_1 {
    unsigned int field_0;
} st_48e610_1;

extern st_48e610_1 *g_6168e8;
extern st_48e610_0 *gpGlobals;

int ResetSequenceInfo__14CBaseAnimating(float idx)
{
    int v1;  // eax
    st_48e610_2 *v2;  // eax

    v1 = g_6168e8(*(int *)(*(int *)idx + 520));
    sub_489bc0(v1, *(int *)idx, *(unsigned int *)&idx + 108, *(unsigned int *)&idx + 112);
    *(unsigned int *)(*(unsigned int *)&idx + 124) = sub_48a390(idx) & 1;
    *(float *)(*(int *)idx + 308) = *(float *)gpGlobals;
    v2 = *(int *)idx;
    v2->field_138 = 0x3f800000;
    *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
    *(float *)(*(unsigned int *)&idx + 116) = *(float *)gpGlobals;
    return v2;
}

