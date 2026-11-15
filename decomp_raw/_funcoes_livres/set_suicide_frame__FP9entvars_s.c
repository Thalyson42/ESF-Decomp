// set_suicide_frame__FP9entvars_s @0x9f360 size=114
typedef struct st_49f360_0 {
    char padding_0[152];
    unsigned int field_98;
} st_49f360_0;

extern st_49f360_0 *gpGlobals;

unsigned int set_suicide_frame__FP9entvars_s(unsigned int *a0)
{
    unsigned int v0;  // eax

    v0 = strcmp@GLIBC_2.0(a0[46] + gpGlobals->field_98, "models/player.mdl");
    if (!v0)
    {
        a0[67] = 0;
        a0[66] = 6;
        a0[92] = 2;
        *(float *)&a0[65] = -1.0f;
    }
    return v0;
}

