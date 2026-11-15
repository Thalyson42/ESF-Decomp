// EntityIndex__18CSaveRestoreBufferP7edict_s @0x1352f0 size=82
typedef struct st_5352f0_0 {
    char padding_0[32];
    int field_20;
    char padding_24[4];
    unsigned int field_28;
} st_5352f0_0;

int EntityIndex__18CSaveRestoreBufferP7edict_s(st_5352f0_0 **a0, unsigned int a1)
{
    int v0;  // esi
    st_5352f0_0 *v1;  // eax

    if (*a0 && a1)
    {
        v0 = 0;
        v1 = *a0;
        if (NULL < *a0->field_20)
        {
            do
            {
                if (*(int *)(v1->field_28 + v0 * 24 + 4) == a1)
                    return v0;
            } while ((v0 += 1, v1 = *a0, v0 < *a0->field_20));
        }
    }
    return -0x1;
}

