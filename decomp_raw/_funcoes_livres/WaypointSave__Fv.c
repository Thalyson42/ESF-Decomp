// WaypointSave__Fv @0x18a190 size=582
typedef struct st_58a190_1 {
    unsigned short field_0;
    char padding_2[6];
    struct st_58a190_1 *field_8;
} st_58a190_1;

typedef struct st_58a190_2 {
    struct st_58a190_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_58a190_2;

typedef struct st_58a190_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_58a190_0;

extern st_58a190_0 *gpGlobals;
extern char waypoints;
extern int num_waypoints;
extern st_58a190_2 paths;

int WaypointSave__Fv(void)
{
    st_58a190_1 *v13;  // esi
    unsigned int v14;  // eax
    st_58a190_1 *v15;  // esi
    int v16;  // edi
    st_58a190_1 *v17;  // esi
    st_58a190_1 *v18;  // esi
    int v19;  // edi
    unsigned short *v20;  // eax
    int v0;  // [bp-0x194]
    char *v1;  // [bp-0x190]
    int iter;  // [bp-0x18c]
    unsigned short v3;  // [bp-0x186]
    char v4[8];  // [bp-0x184]
    unsigned int v5;  // [bp-0x17c]
    unsigned int v6;  // [bp-0x178]
    int v7;  // [bp-0x174]
    char v8;  // [bp-0x170]
    char v9;  // [bp-0x151]
    char v10;  // [bp-0x144]
    char v11;  // [bp-0x104]

    strcpy(v4, "HPB_bot");
    v5 = 4;
    v6 = 0;
    v7 = num_waypoints;
    v1 = &v4[0];
    sub_48d0e0(&v8, 0, 32);
    sub_48d360(&v8, gpGlobals->field_c + gpGlobals->field_98, 31);
    v9 = 0;
    sub_48e110(&v10, gpGlobals->field_c + gpGlobals->field_98);
    sub_48c150(&v10, ".ESF_wpt");
    sub_489050(&v11, "waypoints", &v10);
    v0 = sub_48d440(&v11, "wb");
    sub_48d9f0(v1, 52, 1, v0);
    iter = 0;
    if (iter < num_waypoints)
    {
        do
        {
            sub_48d9f0(&(&waypoints)[16 * iter], 16, 1, v0);
            iter += 1;
        } while (iter < num_waypoints);
    }
    iter = 0;
    while (iter < num_waypoints)
    {
        v13 = (&paths.field_0)[iter];
        v3 = 0;
        if ((&paths.field_0)[iter])
        {
            v14 = v3 | 0x620000;
            do
            {
                v15 = v13;
                v16 = 0;
                do
                {
                    if ((&v15->field_0)[v16] != 0xffff)
                        v14 += 1;
                } while ((v16 += 1, v16 <= 3));
                v13 = v15->field_8;
            } while (v15->field_8);
            v3 = v14;
        }
        sub_48d9f0(&v3, 2, 1, v0);
        v17 = (&paths.field_0)[iter];
        if ((&paths.field_0)[iter])
        {
            while (1)
            {
                v18 = v17;
                v19 = 0;
                do
                {
                    v20 = v19 * 2;
                    if (*(short *)(v20 + v18) != 0xffff)
                        sub_48d9f0(v20 + v18, 2, 1, v0);
                } while ((v19 += 1, v19 <= 3));
                v17 = v18->field_8;
                if (!v18->field_8)
                    break;
            }
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return sub_48c560(v0);
}

