// StoreRecentUsedSentence__10CChatClassPPQ210CChatClass13CChatSentencePQ210CChatClass13CChatSentence @0x148e40 size=41
int StoreRecentUsedSentence__10CChatClassPPQ210CChatClass13CChatSentencePQ210CChatClass13CChatSentence(unsigned int a0, unsigned int *a1, unsigned int a2)
{
    char v0;  // cl
    unsigned int v2;  // 4128

    v0 = 4;
    do
    {
        a1[v0] = *(int *)((char *)&a1[v0] - 4);
        v2 = _ccall(4, 19, v0 - 1, 0, 0);
        v0 -= 1;
    } while (!(v2 & 1));
    *a1 = a2;
    return a2;
}

