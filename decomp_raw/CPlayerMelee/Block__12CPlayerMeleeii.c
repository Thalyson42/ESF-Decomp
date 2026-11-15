// Block__12CPlayerMeleeii @0x104a80 size=140
typedef struct st_504a80_0 {
    char padding_0[292];
    unsigned int field_124;
} st_504a80_0;

unsigned int Block__12CPlayerMeleeii(st_504a80_0 *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // esi
    int v1;  // edi

    v0 = a1;
    if (v0 & 1)
        v0 &= 0xfffffffe;
    if (v0 & 0x800)
        v0 &= 0xfffff7ff;
    v1 = 2;
    while (1)
    {
        if (!(sub_48b040(a0->field_124 + 1284, v1) & v0) && sub_48b040(a0->field_124 + 1284, v1) & a2)
            goto LABEL_504b00;
        else
            goto LABEL_504ada;
LABEL_504ada:
        v1 += 1;
        if (v1 > 5)
        {
            if (v0 == a2 || v0 & 408 && v0 & a2)
                return 1;
LABEL_504b00:
            return 0;
        }
    }
}

