// DeathNotice__13CMonsterMakerP9entvars_s @0xd39f0 size=38
unsigned int * DeathNotice__13CMonsterMakerP9entvars_s(unsigned int *a0, unsigned int *a1)
{
    unsigned int *v0;  // eax

    v0 = a0;
    v0[172] = v0[172] - 1;
    if (!v0[176])
    {
        v0 = a1;
        v0[0x66] = 0;
    }
    return v0;
}

