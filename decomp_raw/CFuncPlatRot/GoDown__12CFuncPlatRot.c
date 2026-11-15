// GoDown__12CFuncPlatRot @0xe97a0 size=77
int GoDown__12CFuncPlatRot(float a0)
{
    CFuncPlat::GoDown(a0);
    return CFuncPlatRot::RotMove(a0, *(unsigned int *)&a0 + 280, *(float *)(*(int *)a0 + 260) - *(float *)(*(int *)a0 + 0x100));
}

