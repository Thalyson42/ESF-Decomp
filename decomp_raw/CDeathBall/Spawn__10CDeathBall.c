// Spawn__10CDeathBall @0xa90a0 size=153
int Spawn__10CDeathBall(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 0x11;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 45;
    *(unsigned int *)(*(unsigned int *)&idx + 208) = 20;
    *(float *)(*(unsigned int *)&idx + 0xcc) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 212) = 1952540004;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 1818321512;
    *(unsigned short *)(*(unsigned int *)&idx + 220) = 108;
    return sub_48cf50(idx);
}

