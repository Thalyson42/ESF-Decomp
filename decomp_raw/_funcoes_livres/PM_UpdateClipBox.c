// PM_UpdateClipBox @0x194380 size=342
typedef struct st_594380_0 {
    char padding_0[324856];
    unsigned int field_4f4f8;
    unsigned int field_4f4fc;
    unsigned int field_4f500;
    unsigned int field_4f504;
    unsigned int field_4f508;
    unsigned int field_4f50c;
    unsigned int field_4f510;
    unsigned int field_4f514;
    char padding_4f518[12];
    unsigned int field_4f524;
    unsigned int field_4f528;
    unsigned int field_4f52c;
    unsigned int field_4f530;
    unsigned int field_4f534;
    unsigned int field_4f538;
    unsigned int field_4f53c;
    unsigned int field_4f540;
    unsigned int field_4f544;
} st_594380_0;

extern st_594380_0 *pmove;

unsigned int * PM_UpdateClipBox(void)
{
    unsigned int v0;  // [bp-0xc4]
    unsigned int v1;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xbc]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]

    v15 = -4.0f;
    v16 = -9.0f;
    v12 = 4.0f;
    v13 = 4.0f;
    v14 = 9.0f;
    v9 = -4.0f;
    v10 = -4.0f;
    v11 = -4.0f;
    v6 = 4.0f;
    v7 = 4.0f;
    v8 = 5.0f;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = 0;
    *(float *)&pmove->padding_0[324852] = -4.0f;
    *(float *)&pmove->field_4f4f8 = v15;
    *(float *)&pmove->field_4f4fc = v16;
    *(float *)&pmove->field_4f524 = v12;
    *(float *)&pmove->field_4f528 = v13;
    *(float *)&pmove->field_4f52c = v14;
    *(float *)&pmove->field_4f500 = v9;
    *(float *)&pmove->field_4f504 = v10;
    *(float *)&pmove->field_4f508 = v11;
    *(float *)&pmove->field_4f530 = v6;
    *(float *)&pmove->field_4f534 = v7;
    *(float *)&pmove->field_4f538 = v8;
    pmove->field_4f50c = v3;
    pmove->field_4f510 = v4;
    pmove->field_4f514 = v5;
    pmove->field_4f53c = v0;
    pmove->field_4f540 = v1;
    pmove->field_4f544 = v2;
    return pmove;
}

