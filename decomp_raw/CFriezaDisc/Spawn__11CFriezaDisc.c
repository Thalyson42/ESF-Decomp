// Spawn__11CFriezaDisc @0xc0b70 size=162
int Spawn__11CFriezaDisc(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 10;
    *(unsigned int *)(*(unsigned int *)&idx + 192) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 176) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 200) = 30;
    *(unsigned int *)(*(unsigned int *)&idx + 208) = 25;
    *(float *)(*(unsigned int *)&idx + 0xcc) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 212) = 1701409382;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 1768186234;
    *(unsigned short *)(*(unsigned int *)&idx + 220) = 25459;
    *(char *)(*(unsigned int *)&idx + 222) = 0;
    return CBasePlayerItem::FallInit(idx);
}

