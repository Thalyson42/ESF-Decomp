// Spawn__11CKamehameha @0xc93f0 size=254
int Spawn__11CKamehameha(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 6;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = 36;
    *(unsigned int *)(*(unsigned int *)&idx + 224) = 1150;
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 20;
    *(unsigned int *)(*(unsigned int *)&idx + 232) = 4;
    *(unsigned int *)(*(unsigned int *)&idx + 236) = 4;
    *(float *)(*(unsigned int *)&idx + 240) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 244) = 1701667179;
    *(unsigned int *)(*(unsigned int *)&idx + 248) = 1701667176;
    *(unsigned short *)(*(unsigned int *)&idx + 252) = 24936;
    *(char *)(*(unsigned int *)&idx + 254) = 0;
    *(float *)(*(unsigned int *)&idx + 500) = 0.10000000149011612f;
    *(unsigned int *)(*(unsigned int *)&idx + 508) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 504) = 1;
    return CBasePlayerItem::FallInit(idx);
}

