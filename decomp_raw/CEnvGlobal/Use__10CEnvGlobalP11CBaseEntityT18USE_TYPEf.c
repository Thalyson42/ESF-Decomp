// Use__10CEnvGlobalP11CBaseEntityT18USE_TYPEf @0x95760 size=220
typedef struct st_495760_0 {
    char padding_0[100];
    int field_64;
    unsigned int field_68;
} st_495760_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern int gGlobalState;

int Use__10CEnvGlobalP11CBaseEntityT18USE_TYPEf(st_495760_0 *a0)
{
    unsigned int v3;  // edi
    unsigned int v4;  // esi
    unsigned int v5;  // ebx
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    v2 = v3;
    v1 = v4;
    v0 = v5;
    CGlobalState::EntityGetState(&gGlobalState, a0->field_64);
    if (a0->field_68 > 3)
        goto LABEL_0x4957d0;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_68] - 1565484)]));
}

