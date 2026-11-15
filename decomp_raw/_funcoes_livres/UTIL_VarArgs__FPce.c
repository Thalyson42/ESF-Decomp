// UTIL_VarArgs__FPce @0x1332e0 size=54
extern int string.1783;

int UTIL_VarArgs__FPce(int a0)
{
    char v0;  // [bp+0x8]

    vsprintf@GLIBC_2.0(&string.1783, a0, &v0);
    return &string.1783;
}

