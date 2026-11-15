// __register_frame @0x1968d0 size=51
void __register_frame(int a0)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_5968cc(v0, v1);
    __register_frame_info(a0, malloc@GLIBC_2.0(24));
    return;
}

