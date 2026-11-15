// Jump__11CBasePlayer @0xf8a50 size=491
typedef struct st_4f8a50_1 {
    char padding_0[380];
    unsigned int field_17c;
} st_4f8a50_1;

typedef struct st_4f8a50_0 {
    char padding_0[32];
    char field_20;
    char padding_21[11];
    char field_2c;
    char padding_2d[367];
    unsigned int field_19c;
    char padding_1a0[32];
    unsigned int field_1c0;
    char padding_1c4[140];
    unsigned int field_250;
} st_4f8a50_0;

int Jump__11CBasePlayer(float a0)
{
    st_4f8a50_0 *v5;  // eax
    st_4f8a50_0 *v6;  // eax
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    double v7;  // mm7
    unsigned int v8;  // eax
    st_4f8a50_0 *v9;  // edx
    st_4f8a50_1 *v10;  // ecx
    unsigned int *v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    unsigned int v0;  // [bp-0xe8]
    float v1;  // [bp-0xc4]
    float v2;  // [bp-0xc0]
    float v3;  // [bp-0xbc]

    if (*(int *)(*(unsigned int *)&a0 + 868))
    {
        return v17;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 800))
    {
        return v16;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 828))
    {
        return v15;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 812))
    {
        return v14;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 816))
    {
        return v13;
    }
    else if (!*(int *)(*(unsigned int *)&a0 + 1904))
    {
        v5 = *(int *)a0;
        if (v5->field_250)
        {
            return v5;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 892))
        {
            return v5;
        }
        else if (v5->padding_1a0[5] & 8)
        {
            return v5;
        }
        else if ((int)v5->field_1c0 > 1)
        {
            return v5;
        }
        else if (!(*(char *)(*(unsigned int *)&a0 + 712) & 2))
        {
            return v5;
        }
        else if (!(v5->padding_1a0[5] & 2))
        {
            return v5;
        }
        else if (v5->field_19c)
        {
            UTIL_MakeVectors(&v5->padding_2d[35]);
            EMIT_SOUND_DYN(*(int *)(*(int *)a0 + 520), 4, "weapons/jump.wav", 0x3f800000, 0.800000011920929f, 0, 100);
            if (*(char *)(*(int *)a0 + 384) & 4)
            {
                CBasePlayer::SetAnimation(a0, 2);
                v6 = *(int *)a0;
                v7 = *(float *)(*(int *)a0 + 608) - 50.0;
            }
            else
            {
                if (*(char *)(*(int *)a0 + 384) & 16)
                    v0 = 3;
                else
                    v0 = 1;
                CBasePlayer::SetAnimation(a0);
                v6 = *(int *)a0;
                v7 = *(float *)(*(int *)a0 + 608) - 20.0;
            }
            *(float *)&v6[1].padding_0[12] = (float)v7;
            if (0.0 > *(float *)(*(int *)a0 + 608))
                *(float *)(*(int *)a0 + 608) = 0.0f;
            v8 = *(int *)(*(int *)a0 + 412);
            if (!v8 || v8 == 0xffffff80 || !(*(char *)(v8 + 548) & 4))
                return v8 + 128;
            v9 = *(int *)a0;
            v10 = &v9->field_20;
            v11 = &v9->field_2c;
            v1 = *(float *)&v9->field_20 + *(float *)&v9->field_2c;
            v2 = *(float *)&v10->padding_0[4] + *(float *)&v11[1];
            v3 = *(float *)&v10->padding_0[8] + *(float *)&v11[2];
            *(float *)&v9->field_20 = v1;
            *(float *)&v9->padding_21[3] = v2;
            *(float *)&v9->padding_21[7] = v3;
            return v8 + 128;
        }
        else
        {
            return v5;
        }
    }
    else
    {
        return v12;
    }
}

