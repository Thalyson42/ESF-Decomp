// WaypointDebug__Fv @0x187ef0 size=94
extern int fp;

int WaypointDebug__Fv(void)
{
    fp = fopen@GLIBC_2.1("ESF_bot.txt", "a");
    fprintf@GLIBC_2.0(fp, "WaypointDebug: LINKED LIST ERROR!!!\n");
    return fclose@GLIBC_2.1(fp);
}

