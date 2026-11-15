// MakeTask__4CBot9ETaskCode @0x1800f0 size=5410
typedef struct st_5800f0_2 {
    char padding_0[20];
    struct st_5800f0_0 *field_14;
} st_5800f0_2;

typedef struct st_5800f0_0 {
    char padding_0[32];
    struct st_5800f0_1 *field_20;
} st_5800f0_0;

typedef struct st_5800f0_1 {
    unsigned int field_0;
} st_5800f0_1;

typedef struct st_5800f0_3 {
    char padding_0[4196];
    struct st_5800f0_2 *field_1064;
    char padding_1068[4];
    unsigned int field_106c;
} st_5800f0_3;

extern char _GLOBAL_OFFSET_TABLE_;

st_5800f0_3 * MakeTask__4CBot9ETaskCode(st_5800f0_3 *a0, st_5800f0_3 *a1)
{
    st_5800f0_3 *v0;  // eax
    st_5800f0_3 *v1;  // eax
    st_5800f0_3 *v2;  // edx

    v0 = a0;
    if (v0->field_1064)
    {
        v1 = v0->field_1064->field_14->field_20(v0->field_1064);
        if (v1 == a1)
            return v1;
        v2 = a0;
        v2->field_106c = a0->field_1064->field_14->field_20(a0->field_1064);
        v0 = CBot::KillCurrentTask(v2);
    }
    if (a1 > 0x20)
        return v0;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&_GLOBAL_OFFSET_TABLE_ + 0x4 * a1 - 604524)]));
}

