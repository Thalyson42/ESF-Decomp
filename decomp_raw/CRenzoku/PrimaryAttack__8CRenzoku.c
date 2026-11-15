// PrimaryAttack__8CRenzoku @0x10e3d0 size=148
int PrimaryAttack__8CRenzoku(float a0)
{
    if (*(int *)(*(unsigned int *)&a0 + 468) > 0)
        return (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 328))(a0);
    if (!*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 828))
        return sub_48a400(a0);
    *(unsigned int *)(*(int *)(*(unsigned int *)&a0 + 128) + 828) = 0;
    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return sub_48a400(a0);
}

