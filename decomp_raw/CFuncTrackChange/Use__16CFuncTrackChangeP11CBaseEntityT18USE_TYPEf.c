// Use__16CFuncTrackChangeP11CBaseEntityT18USE_TYPEf @0xed880 size=224
int Use__16CFuncTrackChangeP11CBaseEntityT18USE_TYPEf(float idx)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if ((unsigned int)*(int *)(*(unsigned int *)&idx + 128) > 1)
        return v2;
    if (!*(int *)(*(unsigned int *)&idx + 128))
    {
        v1 = *(int *)(*(unsigned int *)&idx + 292);
        goto LABEL_4ed8ca;
    }
    else if (*(int *)(*(unsigned int *)&idx + 128) == 1)
    {
        v1 = *(int *)(*(unsigned int *)&idx + 296);
LABEL_4ed8ca:
        *(unsigned int *)(*(unsigned int *)&idx + 316) = sub_48a950(idx, v1);
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 316) = 1;
    }
    if (*(int *)(*(unsigned int *)&idx + 316) == 1)
        return sub_489390(*(int *)(*(int *)idx + 520), 2, "buttons/button11.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&idx + 324) = 0;
    if (*(int *)(*(unsigned int *)&idx + 128))
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 240))(idx);
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 244))(idx);
}

