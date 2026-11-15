// DropDelay__9CTestHull @0xe1980 size=121
typedef struct st_4e1980_2 {
    struct st_4e1980_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4e1980_2;

typedef struct st_4e1980_1 {
    char padding_0[260];
    float field_104;
} st_4e1980_1;

typedef struct st_4e1980_0 {
    float field_0;
} st_4e1980_0;

extern char CallBuildNodeGraph__9CTestHull;
extern st_4e1980_0 *gpGlobals;
extern int WorldGraph+12;

short DropDelay__9CTestHull(st_4e1980_2 *a0)
{
    UTIL_ClientPrintAll(4, "Node Graph out of Date. Rebuilding...", 0, 0, 0, 0);
    a0->field_c = _INSERT(UTIL_SetOrigin(a0->field_0, WorldGraph+12), 0, 0) | 0xffff0000;
    a0->field_10 = &CallBuildNodeGraph__9CTestHull;
    a0->field_0->field_104 = (float)(1.0 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

