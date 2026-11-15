// TakeHealth__12CBaseMonsterfi @0xa57b0 size=92
typedef struct st_4a57b0_0 {
    char padding_0[364];
    unsigned int field_16c;
} st_4a57b0_0;

typedef struct st_4a57b0_1 {
    struct st_4a57b0_0 *field_0;
    char padding_4[612];
    unsigned int field_268;
} st_4a57b0_1;

unsigned int TakeHealth__12CBaseMonsterfi(st_4a57b0_1 *a0, float a1, int a2)
{
    if (*(float *)&a0->field_0->field_16c == 0.0f)
        return 0;
    a0->field_268 = a0->field_268 & ~(a2 & 0x3fff);
    return CBaseEntity::TakeHealth(a0, a1, a2);
}

