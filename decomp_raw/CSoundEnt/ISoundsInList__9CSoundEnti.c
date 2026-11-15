// ISoundsInList__9CSoundEnti @0x11f270 size=122
typedef struct st_51f270_0 {
    unsigned int field_0;
} st_51f270_0;

extern st_51f270_0 *g_6168b4;

unsigned int ISoundsInList__9CSoundEnti(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // esi
    unsigned int v1;  // edx
    unsigned int idx;  // esi

    if (a1 == 1)
    {
        v0 = a0[25];
    }
    else if (a1 == 2)
    {
        v0 = a0[26];
    }
    else
    {
        g_6168b4(1, "Unknown Sound List Type!\n");
    }
    if (v0 == 0xffffffff)
        return 0;
    v1 = 0;
    do
    {
        idx = v0;
        v1 += 1;
        v0 = a0[35 + 8 * idx];
    } while (a0[35 + 8 * idx] != 0xffffffff);
    return v1;
}

