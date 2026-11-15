// StoreChatMsg__10CChatClassP7edict_sPCc @0x148d70 size=204
typedef struct st_548d70_1 {
    char padding_0[592];
    unsigned int field_250;
} st_548d70_1;

typedef struct st_548d70_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_548d70_0;

extern st_548d70_0 *gpGlobals;

char * StoreChatMsg__10CChatClassP7edict_sPCc(void* a0, st_548d70_1 *a1, char *a2)
{
    char *v1;  // eax
    void* iter;  // edx
    unsigned int *j;  // esi
    unsigned int v4;  // ecx
    char *v5;  // eax
    short i;  // [bp-0x6]

    if (!a2)
    {
        return v5;
    }
    else if (*a2)
    {
        if (a0 != 0xffffffdf && (char)a0[33])
        {
            v1 = sub_488af0(a2, a0 + 33);
            if (!v1)
                return v1;
        }
        i = 4;
        do
        {
            iter = a0 + i * 168;
            j = iter - 168;
            for (v4 = 42; v4; j += 1)
            {
                v4 -= 1;
                *(unsigned int *)iter = *j;
                iter += 4;
            }
            i -= 1;
        } while (i > 0);
        *(float *)&a0[164] = gpGlobals->field_0;
        sub_48e110(a0 + 33, a2);
        return sub_48e110(a0, a1->field_250 + gpGlobals->field_98);
    }
    else
    {
        return a2;
    }
}

