// SpectatorConnect__FP7edict_s @0xa1c00 size=54
typedef struct st_4a1c00_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_4a1c00_0;

int SpectatorConnect__FP7edict_s(st_4a1c00_0 *a0)
{
    int v0;  // eax

    v0 = (!a0 ? 0 : a0->field_7c);
    if (v0)
        v0 = CBaseSpectator::SpectatorConnect(v0);
    return v0;
}

