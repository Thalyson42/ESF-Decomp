// Precache__9CBubbling @0xaf430 size=55
typedef struct st_4af430_1 {
    char padding_0[108];
    unsigned int field_6c;
} st_4af430_1;

typedef struct st_4af430_0 {
    unsigned int field_0;
} st_4af430_0;

extern st_4af430_0 *g_engfuncs;

unsigned int Precache__9CBubbling(st_4af430_1 *a0)
{
    unsigned int v0;  // eax

    v0 = g_engfuncs("sprites/bubble.spr");
    a0->field_6c = v0;
    return v0;
}

