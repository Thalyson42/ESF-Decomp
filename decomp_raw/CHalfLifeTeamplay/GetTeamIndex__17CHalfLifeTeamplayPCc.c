// GetTeamIndex__17CHalfLifeTeamplayPCc @0x128a00 size=105
extern int num_teams;
extern char team_names;

int GetTeamIndex__17CHalfLifeTeamplayPCc(unsigned int a0, char *a1)
{
    int v0;  // esi

    if (a1 && *a1)
    {
        v0 = 0;
        if (NULL < num_teams)
        {
            do
            {
                if (!strcasecmp@GLIBC_2.0(&(&team_names)[16 * v0], a1))
                    return v0;
            } while ((v0 += 1, v0 < num_teams));
        }
    }
    return -0x1;
}

