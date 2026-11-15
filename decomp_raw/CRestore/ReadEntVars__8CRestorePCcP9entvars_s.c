// ReadEntVars__8CRestorePCcP9entvars_s @0x1367e0 size=58
extern int gEntvarsDescription;

int ReadEntVars__8CRestorePCcP9entvars_s(int a0, int a1, int a2)
{
    return CRestore::ReadFields(a0, a1, a2, &gEntvarsDescription, 86);
}

