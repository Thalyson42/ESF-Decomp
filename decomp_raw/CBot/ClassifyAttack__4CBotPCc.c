// ClassifyAttack__4CBotPCc @0x174e40 size=686
unsigned int ClassifyAttack__4CBotPCc(unsigned int a0, int a1)
{
    if (strcmp@GLIBC_2.0(a1, "kiblast") && strcmp@GLIBC_2.0(a1, "scattershot") && strcmp@GLIBC_2.0(a1, "renzoku"))
    {
        if (!strcmp@GLIBC_2.0(a1, "blueattack") || !strcmp@GLIBC_2.0(a1, "burningattack") || !strcmp@GLIBC_2.0(a1, "greenattack") || !strcmp@GLIBC_2.0(a1, "purpleattack") || !strcmp@GLIBC_2.0(a1, "yellowattack"))
            return 2;
        if (!strcmp@GLIBC_2.0(a1, "masenko") || !strcmp@GLIBC_2.0(a1, "powerbeam"))
            return 3;
        if (!strcmp@GLIBC_2.0(a1, "kamehameha") || !strcmp@GLIBC_2.0(a1, "gallitgun") || !strcmp@GLIBC_2.0(a1, "mouthblast") || !strcmp@GLIBC_2.0(a1, "finalflash"))
            return 4;
        if (!strcmp@GLIBC_2.0(a1, "bigbang") || !strcmp@GLIBC_2.0(a1, "finishingbuster") || !strcmp@GLIBC_2.0(a1, "Spirit Bomb") || !strcmp@GLIBC_2.0(a1, "Special Beam Cannon") || !strcmp@GLIBC_2.0(a1, "Death Ball") || !strcmp@GLIBC_2.0(a1, "shieldattack") || !strcmp@GLIBC_2.0(a1, "Kame Torpedo") || !strcmp@GLIBC_2.0(a1, "Scattering Beam"))
            return 5;
        if (!strcmp@GLIBC_2.0(a1, "Destructo Disc") || !strcmp@GLIBC_2.0(a1, "Frieza Disc"))
            return 6;
        return (!strcmp@GLIBC_2.0(a1, "rock") ? 7 : 8);
        return 6;
        return 5;
        return 4;
        return 3;
        return 2;
    }
    return 1;
}

