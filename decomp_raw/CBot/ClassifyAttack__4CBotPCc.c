// ClassifyAttack__4CBotPCc @0x174e40 size=686
unsigned int ClassifyAttack__4CBotPCc(unsigned int a0, int a1)
{
    if (sub_488af0(a1, "kiblast") && sub_488af0(a1, "scattershot") && sub_488af0(a1, "renzoku"))
    {
        if (!sub_488af0(a1, "blueattack") || !sub_488af0(a1, "burningattack") || !sub_488af0(a1, "greenattack") || !sub_488af0(a1, "purpleattack") || !sub_488af0(a1, "yellowattack"))
            return 2;
        if (!sub_488af0(a1, "masenko") || !sub_488af0(a1, "powerbeam"))
            return 3;
        if (!sub_488af0(a1, "kamehameha") || !sub_488af0(a1, "gallitgun") || !sub_488af0(a1, "mouthblast") || !sub_488af0(a1, "finalflash"))
            return 4;
        if (!sub_488af0(a1, "bigbang") || !sub_488af0(a1, "finishingbuster") || !sub_488af0(a1, "Spirit Bomb") || !sub_488af0(a1, "Special Beam Cannon") || !sub_488af0(a1, "Death Ball") || !sub_488af0(a1, "shieldattack") || !sub_488af0(a1, "Kame Torpedo") || !sub_488af0(a1, "Scattering Beam"))
            return 5;
        if (!sub_488af0(a1, "Destructo Disc") || !sub_488af0(a1, "Frieza Disc"))
            return 6;
        return (!sub_488af0(a1, "rock") ? 7 : 8);
        return 6;
        return 5;
        return 4;
        return 3;
        return 2;
    }
    return 1;
}

