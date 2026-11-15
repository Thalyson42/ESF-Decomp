// UTIL_BloodDecalTrace__FP11TraceResulti @0x133890 size=131
typedef struct st_533890_0 {
    unsigned int field_0;
} st_533890_0;

extern st_533890_0 *g_616928;

unsigned int UTIL_BloodDecalTrace__FP11TraceResulti(int a0, int a1)
{
    unsigned int v0;  // eax

    v0 = sub_48a6d0(a1);
    if (!v0)
        return v0;
    return (a1 == 247 ? sub_48d7a0(a0, g_616928(0, 5) + 13) : sub_48d7a0(a0, g_616928(0, 5) + 19));
}

