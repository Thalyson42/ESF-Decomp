// FOkToSpeak__12CTalkMonster @0x126040 size=303
typedef struct st_526040_0 {
    float field_0;
} st_526040_0;

typedef struct st_526040_1 {
    unsigned int field_0;
} st_526040_1;

extern unsigned int _12CTalkMonster.g_talkWaitTime;
extern st_526040_1 *g_616804;
extern st_526040_1 *g_6168d8;
extern st_526040_0 *gpGlobals;

unsigned int FOkToSpeak__12CTalkMonster(float a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // edi
    unsigned int *v3;  // edi
    unsigned int v4;  // eax

    if (*(int *)(*(unsigned int *)&a0 + 384) != 5 && *(int *)(*(unsigned int *)&a0 + 388) != 5 && !*(int *)(*(int *)a0 + 368) && *(float *)gpGlobals > *(float *)&_12CTalkMonster.g_talkWaitTime && !(*(char *)(*(int *)a0 + 416) & 2) && *(int *)(*(unsigned int *)&a0 + 384) != 5 && (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 140))(a0))
    {
        v1 = g_616804(*(int *)(*(int *)a0 + 520));
        v2 = 0;
        if (!v1 || !g_6168d8(v1))
            v2 = 1;
        if (!v2)
        {
            v3 = *(unsigned int *)&a0 + 264;
            if (!sub_48d8b0(v3) || !(v4 = sub_488810(v3), (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 224))(a0, sub_488810(v3))))
                return 1;
        }
    }
    return 0;
}

