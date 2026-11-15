// SecondaryAttack__17CCariedDragonBall @0xaee80 size=111
typedef struct st_4aee80_0 {
    float field_0;
} st_4aee80_0;

extern st_4aee80_0 *gpGlobals;

unsigned int SecondaryAttack__17CCariedDragonBall(float a0)
{
    unsigned int *v1;  // edx
    unsigned int v2;  // eax

    v1 = *(int *)(*(unsigned int *)&a0 + 128);
    if (!v1[472])
        return v2;
    if (*(float *)&v1[432] >= *(float *)gpGlobals)
        return v2;
    CBasePlayer::SetAnimation(v1, 6);
    CCariedDragonBall::DropBall(a0);
    v2 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 332))(a0);
    return v2;
}

