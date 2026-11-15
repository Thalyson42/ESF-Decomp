// U_Random__Fv @0x131180 size=96
extern unsigned int glSeed;

unsigned int U_Random__Fv(void)
{
    glSeed = glSeed * 69069;
    glSeed = glSeed + *(int *)(4 * (glSeed & 0xff) + 6070048);
    glSeed = glSeed + 1;
    return glSeed & 0xfffffff;
}

