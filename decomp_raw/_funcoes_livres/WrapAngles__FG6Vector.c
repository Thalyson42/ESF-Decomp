// WrapAngles__FG6Vector @0x179740 size=638
extern float angles.2727;
extern float g_6267f4;
extern unsigned int g_6267f8;
extern unsigned int _.tmp_0.2728;

unsigned int * WrapAngles__FG6Vector(void)
{
    int v0;  // [bp-0xc], Other Possible Types: unsigned int
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]
    unsigned int *idx;  // [bp+0x4]
    unsigned int *v4;  // [bp+0x8]

    if (!_.tmp_0.2728)
        _.tmp_0.2728 = 1;
    *(unsigned int *)&angles.2727 = *v4;
    *(unsigned int *)&g_6267f4 = v4[1];
    g_6267f8 = v4[2];
    if (angles.2727 > 180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(angles.2727 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        angles.2727 = (float)(angles.2727 - (double)(int)v0);
    }
    if (angles.2727 < -180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(angles.2727 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        angles.2727 = (float)((double)(int)v0 + angles.2727);
    }
    if (g_6267f4 > 180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(g_6267f4 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        g_6267f4 = (float)(g_6267f4 - (double)(int)v0);
    }
    if (g_6267f4 < -180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(g_6267f4 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        g_6267f4 = (float)((double)(int)v0 + g_6267f4);
    }
    if (*(float *)&g_6267f8 > 180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(*(float *)&g_6267f8 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        *(float *)&g_6267f8 = (float)(*(float *)&g_6267f8 - (double)(int)v0);
    }
    if (*(float *)&g_6267f8 < -180.0f)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(*(float *)&g_6267f8 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        *(float *)&g_6267f8 = (float)((double)(int)v0 + *(float *)&g_6267f8);
    }
    *(float *)idx = angles.2727;
    *(float *)&idx[1] = g_6267f4;
    *(float *)&idx[2] = *(float *)&g_6267f8;
    return idx;
}

