// BotPreThink__4CBot @0x13cc60 size=309
typedef struct st_53cc60_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_53cc60_0;

extern st_53cc60_0 *gpGlobals;
extern char g_6253cd;
extern int ChatClass;

unsigned int BotPreThink__4CBot(float idx)
{
    *(char *)(*(int *)idx + 421) = *(char *)(*(int *)idx + 421) | 32;
    *(unsigned int *)(*(int *)idx + 384) = 0;
    if (*(char *)(*(unsigned int *)&idx + 2592))
        *(char *)(*(unsigned int *)&idx + 2592) = 0;
    if (*(char *)(*(unsigned int *)&idx + 2732))
        *(char *)(*(unsigned int *)&idx + 2732) = 0;
    if (!*(char *)(*(unsigned int *)&idx + 2756))
        sub_48e110(*(unsigned int *)&idx + 2756, *(int *)(*(int *)idx + 464) + gpGlobals->field_98);
    if (gpGlobals->field_0 - *(float *)(*(unsigned int *)&idx + 2548) < 2.5f && *(int *)(*(unsigned int *)&idx + 3408))
    {
        sub_488290(&ChatClass, idx, *(int *)(*(unsigned int *)&idx + 3408));
        *(unsigned int *)(*(unsigned int *)&idx + 3408) = 0;
    }
    if (*(char *)(*(unsigned int *)&idx + 3140) && *(float *)(*(unsigned int *)&idx + 3144) < gpGlobals->field_0)
    {
        *(char *)(*(unsigned int *)&idx + 3140) = 0;
        if (g_6253cd)
            sub_48b950(idx, 0, *(unsigned int *)&idx + 3148);
    }
    return sub_48b030(idx);
}

