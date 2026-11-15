// __cp_pop_exception @0x195800 size=171
char * __cp_pop_exception(char *a0)
{
    char *v2;  // esi
    char **v3;  // edx
    char *v4;  // eax
    char *v5;  // eax
    char *v6;  // ecx
    char **v7;  // edx
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_5957fc(v0, v1);
    v2 = a0;
    v3 = sub_4895f0(v0, v1);
    v4 = *(int *)&v2[28];
    *(char **)&v2[28] = v4 - 1;
    if (v4 != 0x1)
        return v4;
    v5 = *v3;
    if (v2 == v5 && !v2[20])
        return v5;
    if (v5)
    {
        v6 = *(int *)&v2[24];
        v7 = v3;
        if (v5 != v2)
        {
            do
            {
                v7 = *v3 + 24;
                v5 = *(int *)&(*v3)[24];
                if (!v5)
                    goto LABEL_595856;
            } while ((v3 = v7, v5 != v2));
        }
        if (v5)
            goto LABEL_595860;
    }
LABEL_595856:
    sub_48a720();
LABEL_595860:
    *v7 = v6;
    if (*(int *)&v2[16])
        (*(int *)&v2[16])(*(int *)&v2[8], 2);
    if ((char)sub_48abb0(*(int *)&v2[12]))
        return sub_48bd00(v2);
    sub_48bd00(*(int *)&v2[32]);
    return sub_48bd00(v2);
}

