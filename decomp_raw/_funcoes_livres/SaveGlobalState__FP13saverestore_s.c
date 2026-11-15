// SaveGlobalState__FP13saverestore_s @0x13a0e0 size=140
extern int gGlobalState;

int SaveGlobalState__FP13saverestore_s(int a0)
{
    char v0;  // [bp-0x8]

    sub_489c20(&v0, a0);
    sub_489a20(&gGlobalState, &v0);
    return sub_48c990(&v0, 2);
}

