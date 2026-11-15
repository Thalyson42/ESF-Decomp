// UTIL_IsValidEntity__FP7edict_s @0x134f10 size=41
typedef struct st_534f10_0 {
    unsigned int field_0;
    char padding_4[547];
    char field_227;
} st_534f10_0;

unsigned int UTIL_IsValidEntity__FP7edict_s(st_534f10_0 *a0)
{
    if (a0 && !a0->field_0 && !(a0->field_227 & 64))
        return 1;
    return 0;
}

