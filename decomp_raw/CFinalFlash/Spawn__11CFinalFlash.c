// Spawn__11CFinalFlash @0xbd330 size=252
int Spawn__11CFinalFlash(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 15;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = 42;
    *(unsigned int *)(*(unsigned int *)&idx + 224) = 1000;
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 30;
    *(unsigned int *)(*(unsigned int *)&idx + 232) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 236) = 5;
    *(unsigned int *)(*(unsigned int *)&idx + 240) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 244) = 1634625894;
    *(unsigned int *)(*(unsigned int *)&idx + 248) = 1634494060;
    *(unsigned short *)(*(unsigned int *)&idx + 252) = 26739;
    *(char *)(*(unsigned int *)&idx + 254) = 0;
    *(float *)(*(unsigned int *)&idx + 500) = 0.05000000074505806f;
    *(unsigned int *)(*(unsigned int *)&idx + 508) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 504) = 1;
    return CBasePlayerItem::FallInit(idx);
}

