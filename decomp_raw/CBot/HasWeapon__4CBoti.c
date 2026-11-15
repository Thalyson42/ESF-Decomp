// HasWeapon__4CBoti @0x1534b0 size=139
typedef struct st_5534b0_1 {
    char padding_0[132];
    struct st_5534b0_1 *field_84;
    unsigned int field_88;
} st_5534b0_1;

typedef struct st_5534b0_0 {
    char padding_0[2980];
    short field_ba4;
} st_5534b0_0;

typedef struct st_5534b0_2 {
    char padding_0[612];
    unsigned short field_264;
} st_5534b0_2;

extern char BotManager+3401;

char HasWeapon__4CBoti(st_5534b0_0 *a0, unsigned int a1)
{
    st_5534b0_1 *iter;  // edx
    int v1;  // ecx
    st_5534b0_2 *v2;  // esi
    st_5534b0_1 **v3;  // eax

    if ((a0->field_ba4 > 0 || a1 != 128) && (BotManager+3401 || a1 != 7 && a1 != 10))
    {
        iter = NULL;
        v1 = 0;
        v2 = &a0->padding_0[2368];
        do
        {
            v3 = v1 * 4;
            if (*(int *)(v3 + v2))
            {
                for (iter = *(int *)(v3 + v2); iter; iter = iter->field_84)
                {
                    if (iter->field_88 == a1)
                        goto LABEL_553525;
                }
            }
            else
            {
LABEL_553525:
                if (iter)
                    break;
            }
        } while ((v1 += 1, v1 <= 9));
        return iter != NULL;
    }
    return 0;
}

