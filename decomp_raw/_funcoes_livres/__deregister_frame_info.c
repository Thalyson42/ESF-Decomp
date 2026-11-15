// __deregister_frame_info @0x196988 size=97
typedef struct st_596988_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    int field_c;
    char padding_10[4];
    unsigned int field_14;
} st_596988_0;

typedef struct st_596988_1 {
    char padding_0[622919];
    struct st_596988_0 *field_98147;
} st_596988_1;

typedef struct st_596988_2 {
    char padding_0[110592];
    struct st_596988_0 *field_1b000;
} st_596988_2;

unsigned int * __deregister_frame_info(unsigned int a0)
{
    st_596988_1 *v2;  // ebx
    st_596988_2 *v3;  // ebx
    unsigned int v4;  // edx
    st_596988_0 *v5;  // esi
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_596984(v0, v1);
    v3 = &v2->padding_0[512327];
    v4 = &v3->field_1b000;
    if (v3->field_1b000)
    {
        do
        {
            v5 = *(int *)v4;
            if (v5->field_8 == a0)
            {
                *(unsigned int *)v4 = v5->field_14;
                if (!v5->field_0)
                    return v5;
                sub_48cf10(v5->field_c);
                return v5;
            }
        } while ((v4 = &v5->field_14, v5->field_14));
    }
    return sub_48a650();
}

