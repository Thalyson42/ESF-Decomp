// Remove__14CPowerStruggle @0x10dac0 size=186
typedef struct st_50dac0_0 {
    char padding_0[408];
    unsigned int field_198;
} st_50dac0_0;

int Remove__14CPowerStruggle(float idx)
{
    unsigned int *v2;  // edx
    unsigned int v3;  // esi
    st_50dac0_0 **v0;  // [bp-0x8]

    v0 = CPowerStruggle::GetStrongestAttack(idx);
    if (*(int *)(*(unsigned int *)&idx + 684))
    {
        do
        {
            v2 = *(int *)(*(int *)(*(unsigned int *)&idx + 684) + 4);
            if (!v2[177])
            {
                v2[171] = 0;
                if (0.0 > *(float *)&v2[174])
                    *(unsigned int *)(*v2 + 408) = *v0->field_198;
                (*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 684) + 4) + 96) + 0x200))(*(int *)(*(int *)(*(unsigned int *)&idx + 684) + 4));
            }
        } while ((v3 = *(int *)*(int *)(*(unsigned int *)&idx + 684), __builtin_delete(*(int *)(*(unsigned int *)&idx + 684)), *(unsigned int *)(*(unsigned int *)&idx + 684) = v3, v3));
    }
    return CMagicAttack::Remove(idx);
}

