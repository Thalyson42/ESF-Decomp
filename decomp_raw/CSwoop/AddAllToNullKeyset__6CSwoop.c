// AddAllToNullKeyset__6CSwoop @0x124580 size=71
void AddAllToNullKeyset__6CSwoop(int a0)
{
    int i;  // esi

    i = 0;
    do
    {
        CSwoop::AddToNullKeyset(a0, CSwoop::DirectionsToFlags(a0, i));
        i += 1;
    } while (i <= 5);
    return;
}

