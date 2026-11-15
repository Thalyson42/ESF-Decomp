// DoorGoDown__9CBaseDoor @0xac9a0 size=294
typedef struct st_4ac9a0_1 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4ac9a0_1;

typedef struct st_4ac9a0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ac9a0_0;

extern char DoorHitBottom__9CBaseDoor;
extern st_4ac9a0_0 *gpGlobals;

int DoorGoDown__9CBaseDoor(float idx)
{
    st_4ac9a0_1 *v4;  // edx
    unsigned int v5;  // eax
    unsigned int *v7;  // eax
    unsigned int *v8;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v4 = *(int *)idx;
    if ((int)v4->field_1a0 >= 0)
        v5 = EMIT_SOUND_DYN(*(int *)&v4[1].padding_0[100], 6, *(int *)&v4[1].padding_0[72] + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 3;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(v5, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 224) = &DoorHitBottom__9CBaseDoor;
    if (strcmp@GLIBC_2.0(*(int *)*(int *)idx + gpGlobals->field_98, "func_door_rotating"))
    {
        v8 = *(unsigned int *)&idx + 156;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 156);
        *(float *)&v1 = *(float *)&v8[1];
        *(float *)&v2 = *(float *)&v8[2];
        return CBaseToggle::LinearMove(idx, &v0, *(float *)(*(int *)idx + 504));
    }
    v7 = *(unsigned int *)&idx + 180;
    *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 180);
    *(float *)&v1 = *(float *)&v7[1];
    *(float *)&v2 = *(float *)&v7[2];
    return CBaseToggle::AngularMove(idx, &v0, *(float *)(*(int *)idx + 504));
}

