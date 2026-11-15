// __register_frame_table @0x196950 size=51
void __register_frame_table(int a0)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_59694c(v0, v1);
    __register_frame_info_table(a0, malloc@GLIBC_2.0(24));
    return;
}

