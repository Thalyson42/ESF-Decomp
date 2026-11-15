// Spawn__5CRock @0x1294b0 size=108
int Spawn__5CRock(float idx)
{
    unsigned int v1;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 684) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 688) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 712) = 1;
    *(unsigned int *)(*(unsigned int *)&idx + 708) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 704) = 0;
    v1 = *(int *)idx;
    *(float *)(v1 + 284) = 9.999999974752427e-07f;
    return v1;
}

