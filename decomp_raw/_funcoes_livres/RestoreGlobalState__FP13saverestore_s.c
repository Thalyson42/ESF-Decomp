// RestoreGlobalState__FP13saverestore_s @0x13a170 size=156
extern int gGlobalState;

int RestoreGlobalState__FP13saverestore_s(int a0)
{
    char v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    __18CSaveRestoreBufferP13saverestore_s(&v0, a0);
    v1 = 0;
    v2 = 1;
    CGlobalState::Restore(&gGlobalState, &v0);
    return _._18CSaveRestoreBuffer(&v0, 2);
}

