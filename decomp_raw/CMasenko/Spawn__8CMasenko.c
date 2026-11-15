// Spawn__8CMasenko @0xd2490 size=222
int Spawn__8CMasenko(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 16;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = 24;
    *(unsigned int *)(*(unsigned int *)&idx + 224) = 1350;
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 30;
    *(unsigned int *)(*(unsigned int *)&idx + 232) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 236) = 3;
    *(unsigned int *)(*(unsigned int *)&idx + 244) = 1702060397;
    *(unsigned int *)(*(unsigned int *)&idx + 248) = 7301998;
    *(unsigned int *)(*(unsigned int *)&idx + 508) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 504) = 1;
    *(float *)(*(unsigned int *)&idx + 500) = 0.10000000149011612f;
    return CBasePlayerItem::FallInit(idx);
}

