// Precache__15CFuncTrackTrain @0xec7d0 size=335
typedef struct st_4ec7d0_0 {
    char padding_0[152];
    unsigned int field_98;
    float field_9c;
} st_4ec7d0_0;

extern char _GLOBAL_OFFSET_TABLE_;

int Precache__15CFuncTrackTrain(st_4ec7d0_0 *a0)
{
    unsigned int v3;  // edi
    unsigned int v4;  // esi
    unsigned int v5;  // ebx
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    v2 = v3;
    v1 = v4;
    v0 = v5;
    if (a0->field_9c == 0.0f)
        a0->field_9c = 1.0;
    if (a0->field_98 - 1 > 5)
        goto LABEL_0x4ec838;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_98] - 1209024)]));
}

