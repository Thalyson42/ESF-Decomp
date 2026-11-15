// dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3 @0x198114 size=331
typedef struct st_598114_0 {
    char padding_0[12];
    struct st_598114_1 *field_c;
} st_598114_0;

typedef struct st_598114_3 {
    char padding_0[8];
    struct st_598114_4 *field_8;
    unsigned int field_c;
} st_598114_3;

typedef struct st_598114_4 {
    struct st_598114_2 *field_0;
} st_598114_4;

typedef struct st_598114_1 {
    unsigned int field_0;
} st_598114_1;

typedef struct st_598114_2 {
    char padding_0[4];
    struct st_598114_0 *field_4;
} st_598114_2;

unsigned int dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3(st_598114_3 *a0, st_598114_2 *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    st_598114_2 **v5;  // ecx
    st_598114_4 **v6;  // esi
    unsigned int v7;  // esi
    unsigned int v8;  // edi
    unsigned int v9;  // eax
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x8]

    sub_598110(v0, v1, v2);
    if ((char)sub_48be00(a0, a1))
        return a3;
    v4 = 0;
    v3 = 0;
    if (v4 < a0->field_c)
    {
        do
        {
            v5 = a0->field_8;
            if (a2 && (*((char *)&v5[1 + 2 * v3] + 3) & 192) != 64)
                continue;
            v6 = a3 + (v5[1 + 2 * v3] & 0x1fffffff);
            if (*((char *)&v5[1 + 2 * v3] + 3) & 32)
                v6 = *v6;
            v7 = v5[2 * v3]->field_4->field_c(v5[2 * v3], a1, a2, v6, a4, a5);
            if (!v7)
                continue;
            if (v4)
            {
                if (v4 == v7)
                    continue;
                if (!a4)
                    return 0;
                v8 = a1->field_4->field_c(a1, a4, 1, v4, 0, 0);
                v9 = a1->field_4->field_c(a1, a4, 1, v7, 0, 0);
                if (v8 != v9)
                {
                    if (v8 == a5)
                        continue;
                    if (v9 == a5)
                        goto LABEL_598232;
                }
                return 0;
            }
LABEL_598232:
            v4 = v7;
        } while ((v3 += 1, v3 < a0->field_c));
    }
    return v4;
}

