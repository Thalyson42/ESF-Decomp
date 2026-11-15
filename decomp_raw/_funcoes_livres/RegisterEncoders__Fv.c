// RegisterEncoders__Fv @0xa2e30 size=113
typedef struct st_4a2e30_0 {
    unsigned int field_0;
} st_4a2e30_0;

extern char Entity_Encode__FP7delta_sPCUcT1;
extern char Player_Encode__FP7delta_sPCUcT1;
extern char Custom_Encode__FP7delta_sPCUcT1;
extern st_4a2e30_0 *g_6169c4;

int RegisterEncoders__Fv(void)
{
    g_6169c4("Entity_Encode", &Entity_Encode__FP7delta_sPCUcT1);
    g_6169c4("Custom_Encode", &Custom_Encode__FP7delta_sPCUcT1);
    return g_6169c4("Player_Encode", &Player_Encode__FP7delta_sPCUcT1);
}

