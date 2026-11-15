// Use__10CPathTrackP11CBaseEntityT18USE_TYPEf @0xe6d00 size=163
typedef struct st_4e6d00_0 {
    void* field_0;
    char padding_4[112];
    unsigned int field_74;
} st_4e6d00_0;

void* Use__10CPathTrackP11CBaseEntityT18USE_TYPEf(st_4e6d00_0 *a0, unsigned int a1, unsigned int a2, int a3)
{
    unsigned int v0;  // esi
    void* v1;  // eax
    void* v2;  // eax
    void* v3;  // eax
    unsigned int v5;  // esi
    void* v6;  // eax
    void* v7;  // eax
    void* v8;  // eax

    if (a0->field_74)
    {
        v0 = ((unsigned int)((int)a0->field_0[416]) >> 15 ^ 1) & 1;
        v1 = CBaseEntity::ShouldToggle(a0, a3, v0);
        if (!v1)
        {
            return v1;
        }
        else if (v0)
        {
            v2 = a0->field_0;
            *(char *)&v2[417] = (char)v2[417] | 128;
            return v2;
        }
        else
        {
            v3 = a0->field_0;
            *(char *)&v3[417] = (char)v3[417] & 127;
            return v3;
        }
    }
    else
    {
        v5 = 1 & _INSERT(a0->field_0, 0, (char)a0->field_0[416] ^ 1);
        v6 = CBaseEntity::ShouldToggle(a0, a3, v5);
        if (!v6)
        {
            return v6;
        }
        else if (v5)
        {
            v7 = a0->field_0;
            *(char *)&v7[416] = (char)v7[416] | 1;
            return v7;
        }
        else
        {
            v8 = a0->field_0;
            *(char *)&v8[416] = (char)v8[416] & 254;
            return v8;
        }
    }
}

