// GoUp__12CFuncPlatRot @0xe9850 size=77
int GoUp__12CFuncPlatRot(float a0)
{
    CFuncPlat::GoUp(a0);
    return CFuncPlatRot::RotMove(a0, *(unsigned int *)&a0 + 268, *(float *)(*(int *)a0 + 260) - *(float *)(*(int *)a0 + 0x100));
}

