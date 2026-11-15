// UTIL_UnsetGroupTrace__Fv @0x131570 size=71
typedef struct st_531570_0 {
    unsigned int field_0;
} st_531570_0;

extern unsigned int g_groupmask;
extern unsigned int g_groupop;
extern st_531570_0 *g_6169dc;

int UTIL_UnsetGroupTrace__Fv(void)
{
    g_groupmask = 0;
    g_groupop = 0;
    return g_6169dc(0, 0);
}

