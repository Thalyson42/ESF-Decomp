// InconsistentFile__FPC7edict_sPCcPc @0xa32b0 size=105
typedef struct st_4a32b0_0 {
    unsigned int field_0;
} st_4a32b0_0;

extern st_4a32b0_0 *g_engfuncs.pfnCVarGetFloat;

unsigned int InconsistentFile__FPC7edict_sPCcPc(double a0, unsigned int a1, int a2, int a3)
{
    g_engfuncs.pfnCVarGetFloat("mp_consistency");
    if (a0 != 1.0)
        return 0;
    sprintf@GLIBC_2.0(a3, "Server is enforcing file consistency for %s\n", a2);
    return 1;
}

