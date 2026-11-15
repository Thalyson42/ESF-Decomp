// MakeChatSentence__10CChatClassP17bot_personality_sPCcPc @0x147f90 size=352
typedef struct st_547f90_0 {
    unsigned int field_0;
} st_547f90_0;

extern st_547f90_0 *g_engfuncs.pfnRandomLong;

int MakeChatSentence__10CChatClassP17bot_personality_sPCcPc(int a0, short *a1, int a2, int a3)
{
    int v2;  // eax
    unsigned int i;  // esi
    unsigned int v4;  // esi
    unsigned int v5;  // eax
    unsigned int j;  // esi
    unsigned int v7;  // esi
    unsigned int v8;  // eax
    char *v9;  // edi
    char *v10;  // eax
    char v0;  // [bp-0x64], Other Possible Types: unsigned short
    char v1;  // [bp-0x14]

    strncpy@GLIBC_2.0(&v0, a2, 79);
    v1 = 0;
    v2 = g_engfuncs.pfnRandomLong(1, 100);
    if (v2 <= a1[16])
    {
        i = g_engfuncs.pfnRandomLong(1, 3);
        if (i)
        {
            do
            {
                v4 = i;
                CChatClass::DropChars(a0, &v0, a3);
                strcpy@GLIBC_2.0(&v0, a3);
                i = v4 - 1;
            } while (i);
        }
    }
    v5 = g_engfuncs.pfnRandomLong(1, 100);
    if ((int)v5 <= a1[0x11])
    {
        j = g_engfuncs.pfnRandomLong(1, 2);
        if (j)
        {
            do
            {
                v7 = j;
                CChatClass::SwapChars(a0, &v0, a3);
                strcpy@GLIBC_2.0(&v0, a3);
                j = v7 - 1;
            } while (j);
        }
    }
    v8 = g_engfuncs.pfnRandomLong(1, 100);
    if ((int)v8 <= a1[18])
    {
        v9 = NULL;
        v10 = &v0;
        if ((char)v0)
        {
            do
            {
                *(char *)(v9 + v10) = tolower@GLIBC_2.0(*(char *)(v9 + v10));
                v9 += 1;
            } while (*(char *)(v9 + v10));
        }
    }
    return strcpy@GLIBC_2.0(a3, &v0);
}

