// UpdateAutoTargets__16CFuncTrackChangei @0xed810 size=104
typedef struct st_4ed810_1 {
    char padding_0[292];
    struct st_4ed810_2 *field_124;
    struct st_4ed810_2 *field_128;
} st_4ed810_1;

typedef struct st_4ed810_2 {
    struct st_4ed810_0 *field_0;
} st_4ed810_2;

typedef struct st_4ed810_0 {
    char padding_0[416];
    char field_1a0;
} st_4ed810_0;

st_4ed810_0 * UpdateAutoTargets__16CFuncTrackChangei(st_4ed810_1 *a0, unsigned int a1)
{
    st_4ed810_0 *v0;  // eax
    st_4ed810_0 *v1;  // eax
    st_4ed810_0 *v2;  // eax
    st_4ed810_0 *v3;  // eax

    if (!a0->field_124)
    {
        return v3;
    }
    else if (a0->field_128)
    {
        if (!a1)
            *(char *)(*(int *)a0->field_124 + 416) = *(char *)(*(int *)a0->field_124 + 416) & 254;
        else
            *(char *)(*(int *)a0->field_124 + 416) = *(char *)(*(int *)a0->field_124 + 416) | 1;
        if (a1 != 1)
        {
            v1 = *(int *)a0->field_128;
            v1->field_1a0 = v1->field_1a0 | 1;
            return v1;
        }
        v0 = *(int *)a0->field_128;
        v0->field_1a0 = v0->field_1a0 & 254;
        return v0;
    }
    else
    {
        return v2;
    }
}

