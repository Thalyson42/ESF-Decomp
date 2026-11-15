// Play__14CTargetCDAudio @0x12c540 size=86
int Play__14CTargetCDAudio(float a0)
{
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)(*(int *)a0 + 352);
    sub_488000(v0);
    return sub_48cc00(a0);
}

