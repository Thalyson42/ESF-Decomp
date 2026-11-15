// SetActivity__12CTalkMonster8Activity @0x124c60 size=102
void SetActivity__12CTalkMonster8Activity(int a0, int a1)
{
    int v0;  // esi

    v0 = a1;
    if (v0 == 1 && sub_48bb60(a0))
        v0 = 23;
    if (v0 == 23 && sub_488bc0(a0, 23) == 0xffffffff)
        v0 = 1;
    sub_488c80(a0, v0);
    return;
}

