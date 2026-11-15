// GetIndexedTeamName__17CHalfLifeTeamplayi @0x128a70 size=54
extern char g_5a9a9c;
extern int num_teams;
extern char team_names;

int GetIndexedTeamName__17CHalfLifeTeamplayi(unsigned int a0, int a1)
{
    if (a1 >= 0 && a1 < num_teams)
        return &(&team_names)[16 * a1];
    return &g_5a9a9c;
}

