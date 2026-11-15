// U_Srand__FUi @0x1311e0 size=41
extern unsigned int glSeed;

int U_Srand__FUi(char a0)
{
    glSeed = *(int *)(4 * a0 + 6070048);
    return glSeed;
}

