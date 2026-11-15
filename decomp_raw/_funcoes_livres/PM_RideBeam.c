// PM_RideBeam @0x190ac0 size=63
extern unsigned int pmove;

int PM_RideBeam(void)
{
    int i;  // ecx

    i = 0;
    do
    {
        *(float *)(i * 4 + pmove + 92) = *(float *)(i * 4 + pmove + 576);
        i += 1;
    } while (i <= 2);
    return sub_48dbe0();
}

