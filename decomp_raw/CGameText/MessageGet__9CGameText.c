// MessageGet__9CGameText @0xd1160 size=46
typedef struct st_4d1160_0 {
    char padding_0[468];
    unsigned int field_1d4;
} st_4d1160_0;

typedef struct st_4d1160_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4d1160_1;

extern st_4d1160_1 *gpGlobals;

int MessageGet__9CGameText(st_4d1160_0 **a0)
{
    return *a0->field_1d4 + gpGlobals->field_98;
}

