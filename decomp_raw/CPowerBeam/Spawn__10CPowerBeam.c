// Spawn__10CPowerBeam @0x10ccd0 size=233
int Spawn__10CPowerBeam(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 22;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = 20;
    *(unsigned int *)(*(unsigned int *)&idx + 224) = 1100;
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 20;
    *(unsigned int *)(*(unsigned int *)&idx + 232) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 236) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 244) = 1702326128;
    *(unsigned int *)(*(unsigned int *)&idx + 248) = 1634034290;
    *(unsigned short *)(*(unsigned int *)&idx + 252) = 109;
    *(unsigned int *)(*(unsigned int *)&idx + 508) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 504) = 1;
    *(float *)(*(unsigned int *)&idx + 500) = 0.11999999731779099f;
    return CBasePlayerItem::FallInit(idx);
}

