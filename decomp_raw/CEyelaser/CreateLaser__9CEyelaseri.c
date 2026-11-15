// CreateLaser__9CEyelaseri @0xbcc80 size=229
typedef struct st_4bcc80_2 {
    char padding_0[128];
    struct st_4bcc80_3 *field_80;
} st_4bcc80_2;

typedef struct st_4bcc80_0 {
    char padding_0[272];
    unsigned int field_110;
    char padding_114[52];
    unsigned int field_148;
    float field_14c;
} st_4bcc80_0;

typedef struct st_4bcc80_3 {
    struct st_4bcc80_1 *field_0;
} st_4bcc80_3;

typedef struct st_4bcc80_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4bcc80_1;

typedef struct st_4bcc80_4 {
    unsigned int field_0;
} st_4bcc80_4;

extern st_4bcc80_4 *g_engfuncs.pfnIndexOfEdict;

st_4bcc80_0 ** CreateLaser__9CEyelaseri(st_4bcc80_2 *a0, unsigned int a1)
{
    st_4bcc80_0 **v1;  // edi
    int v0;  // [bp-0x24]

    v1 = CBeam::BeamCreate("sprites/eyelaser.spr", 3);
    *v1->field_148 = 5;
    v0 = 0xff;
    *v1->field_14c = (float)v0;
    CBeam::SetEndEntity(v1, g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_80 + 520)));
    *v1->field_110 = *v1->field_110 & 0xfff | (a1 & 15) * 0x1000;
    CBeam::SetStartEntity(v1, g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_80 + 520)));
    CEyelaser::SetRedEye(a0, v1);
    return v1;
}

