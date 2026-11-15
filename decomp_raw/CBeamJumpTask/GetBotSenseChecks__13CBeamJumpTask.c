// GetBotSenseChecks__13CBeamJumpTask @0x1870c0 size=43
typedef struct st_5870c0_2 {
    char padding_0[8];
    struct st_5870c0_0 *field_8;
    struct st_5870c0_1 *field_c;
} st_5870c0_2;

typedef struct st_5870c0_1 {
    char padding_0[392];
    unsigned int field_188;
} st_5870c0_1;

typedef struct st_5870c0_0 {
    char padding_0[828];
    unsigned int field_33c;
} st_5870c0_0;

unsigned int GetBotSenseChecks__13CBeamJumpTask(st_5870c0_2 *a0)
{
    if (a0->field_8->field_33c && a0->field_c->field_188 == 15)
        return 0;
    return 15;
}

