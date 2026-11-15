// TrySmellTalk__12CTalkMonster @0x127000 size=220
typedef struct st_527000_0 {
    float field_0;
} st_527000_0;

typedef struct st_527000_1 {
    unsigned int field_0;
} st_527000_1;

extern st_527000_1 *g_61692c;
extern st_527000_0 *gpGlobals;

float TrySmellTalk__12CTalkMonster(float idx)
{
    unsigned long long v5;  // mm7
    unsigned long long v7;  // mm7
    unsigned long long v8;  // mm7
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]

    if (!sub_48a4a0(idx))
        return v8;
    if (*(float *)gpGlobals > *(float *)(*(unsigned int *)&idx + 776))
        *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) & 127;
    if (*(char *)(*(unsigned int *)&idx + 680) < 0)
        return v7;
    if (!(*(char *)(*(unsigned int *)&idx + 262) & 4))
        return v5;
    v3 = 2.0f;
    v2 = 0x3f800000;
    strncpy(&v0, "333@", 4);
    g_61692c(v0, 3.200000047683716f);
    strncpy(&v1, "333@", 4);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 752), v1);
    *(float *)(*(unsigned int *)&idx + 776) = (float)(*(float *)gpGlobals + 60.0);
    *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) | 128;
    return v5;
}

