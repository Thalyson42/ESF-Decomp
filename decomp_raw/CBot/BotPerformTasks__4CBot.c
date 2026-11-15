// BotPerformTasks__4CBot @0x181740 size=225
typedef struct st_581740_1 {
    unsigned int field_0;
    unsigned short field_4;
} st_581740_1;

typedef struct st_581740_0 {
    float field_0;
} st_581740_0;

extern st_581740_0 *gpGlobals;

unsigned int BotPerformTasks__4CBot(float idx)
{
    st_581740_1 *v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax

    if (!*(int *)(*(unsigned int *)&idx + 4196))
        return v4;
    if (*(short *)(*(int *)(*(unsigned int *)&idx + 4196) + 4) != 2)
    {
        v1 = *(int *)(*(unsigned int *)&idx + 4196);
        if (*(float *)&v1->field_0 <= *(float *)gpGlobals)
        {
            if ((char)(*(int *)(*(int *)((char *)&v1[3].field_0 + 2) + 36))(v1))
                (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 4196) + 20) + 40))(*(int *)(*(unsigned int *)&idx + 4196));
            (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 4196) + 20) + 28))(*(int *)(*(unsigned int *)&idx + 4196));
        }
        else
        {
            sub_48d0d0(idx);
        }
        if (*(short *)(*(int *)(*(unsigned int *)&idx + 4196) + 4) != 2)
            return *(int *)(*(unsigned int *)&idx + 4196);
    }
    v2 = sub_487cc0(idx);
    if (*(int *)(*(unsigned int *)&idx + 4200) == 33)
        return v2;
    v3 = sub_48acb0(idx, *(int *)(*(unsigned int *)&idx + 4200));
    *(unsigned int *)(*(unsigned int *)&idx + 4200) = 33;
    return v3;
}

