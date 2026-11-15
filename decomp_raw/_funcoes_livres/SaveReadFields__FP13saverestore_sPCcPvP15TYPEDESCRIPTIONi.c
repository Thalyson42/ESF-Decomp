// SaveReadFields__FP13saverestore_sPCcPvP15TYPEDESCRIPTIONi @0x9cc80 size=171
int SaveReadFields__FP13saverestore_sPCcPvP15TYPEDESCRIPTIONi(int a0, int a1, int a2, int a3, int a4)
{
    char v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    __18CSaveRestoreBufferP13saverestore_s(&v0, a0);
    v1 = 0;
    v2 = 1;
    CRestore::ReadFields(&v0, a1, a2, a3, a4);
    return _._18CSaveRestoreBuffer(&v0, 2);
}

