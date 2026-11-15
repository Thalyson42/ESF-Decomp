// SaveGlobalState__FP13saverestore_s @0x13a0e0 size=140
extern int gGlobalState;

int SaveGlobalState__FP13saverestore_s(int a0)
{
    char v0;  // [bp-0x8]

    __18CSaveRestoreBufferP13saverestore_s(&v0, a0);
    CGlobalState::Save(&gGlobalState, &v0);
    return _._18CSaveRestoreBuffer(&v0, 2);
}

