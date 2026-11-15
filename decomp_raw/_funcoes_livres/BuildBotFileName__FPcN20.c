// BuildBotFileName__FPcN20 @0x16d090 size=157
typedef struct st_56d090_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
} st_56d090_0;

unsigned int BuildBotFileName__FPcN20(st_56d090_0 *a0, char *a1, char *a2)
{
    a0->field_0 = 795243365;
    a0->field_4 = 1600549733;
    a0->field_8 = 796159842;
    a0->field_c = 0;
    if (!a1)
        return 0x2f746f00;
    if (*a1 && a2 && *a2)
    {
        sub_48c150(a0, a1);
        sub_48c150(a0, L"/r〱䉃獡䍥慬獳\u3100䌱慂敳畏灴瑵㐀䱃杯\u3100䌳捓敲湥畏灴瑵\u3100䌱敌瑦畏灴瑵\u3100䌲楒桧佴瑵異t㌱䵃摩汤佥瑵異t㠱䉃獡䉥瑯潃扭䕯瑮祲");
        return sub_48c150(a0, a2);
    }
    if (!a1 || !*a1)
        return 0x2f746f00;
    sub_48c150(a0, a1);
    return 0x2f746f00;
}

