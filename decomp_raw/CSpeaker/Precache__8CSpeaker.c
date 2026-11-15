// Precache__8CSpeaker @0x11e590 size=105
typedef struct st_51e590_0 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_51e590_0;

typedef struct st_51e590_2 {
    float field_0;
} st_51e590_2;

typedef struct st_51e590_1 {
    unsigned int field_0;
} st_51e590_1;

extern st_51e590_1 *g_61692c;
extern st_51e590_2 *gpGlobals;

double Precache__8CSpeaker(st_51e590_0 **a0)
{
    double v0;  // mm7
    double v1;  // mm7

    if (!!(*a0->field_1a0 & 1))
        return v1;
    g_61692c(5.0f, 15.0f);
    v0 = 5.0 + *(float *)gpGlobals;
    *a0->field_104 = (float)v0;
    return v0;
}

