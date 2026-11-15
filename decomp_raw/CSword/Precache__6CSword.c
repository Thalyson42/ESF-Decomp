// Precache__6CSword @0x124900 size=59
typedef struct st_524900_0 {
    unsigned int field_0;
} st_524900_0;

extern st_524900_0 *g_6167c4;

int Precache__6CSword(int a0)
{
    sub_48c210(a0);
    return g_6167c4("weapons/swordhit.wav");
}

