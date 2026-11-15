// Spawn__14CDestructoDisc @0xaa1a0 size=162
int Spawn__14CDestructoDisc(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 7;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 30;
    *(unsigned int *)(*(unsigned int *)&idx + 208) = 25;
    *(float *)(*(unsigned int *)&idx + 0xcc) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 212) = 1953719652;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 1952675186;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = 1936286831;
    *(unsigned short *)(*(unsigned int *)&idx + 224) = 99;
    return CBasePlayerItem::FallInit(idx);
}

