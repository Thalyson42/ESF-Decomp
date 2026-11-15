// FixupAngles__FR6Vector @0xeb350 size=93
void FixupAngles__FR6Vector(double a0, double a1, double a2, unsigned int *a3)
{
    Fix__Ff(*(float *)a3);
    *(float *)a3 = *(float *)a3;
    Fix__Ff(*(float *)&a3[1]);
    *(float *)&a3[1] = *(float *)&a3[1];
    Fix__Ff(*(float *)&a3[2]);
    *(float *)&a3[2] = *(float *)&a3[2];
    return;
}

