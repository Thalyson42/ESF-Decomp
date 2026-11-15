// PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence @0x149950 size=326
typedef struct st_549950_2 {
    char padding_0[36];
    unsigned int field_24;
    char field_28;
    char field_29;
} st_549950_2;

typedef struct st_549950_1 {
    unsigned int field_0;
} st_549950_1;

typedef struct st_549950_0 {
    char padding_0[20];
    struct st_549950_1 *field_14;
} st_549950_0;

extern char cout;
extern st_549950_0 *cout+512;

int PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence(unsigned int a0, st_549950_2 *a1)
{
    char *v0;  // [bp-0x34]
    int v1;  // [bp-0x30]
    char *v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    char v5;  // [bp-0x23]

    cout+512->field_14(&cout, "Sentence: ");
    cout+512->field_14(&cout, a1->field_24);
    cout+512->field_14(&cout, " CanModify: ");
    v3 = a1->field_28;
    v4 = 0;
    v2 = &v5;
    memset@GLIBC_2.0(&v5, 0, 24);
    v1 = "%d";
    v0 = &v4;
    sprintf@GLIBC_2.0(&v4, "%d", v3);
    cout+512->field_14(&cout, v0);
    cout+512->field_14(&cout, " UV: ");
    v4 = 0;
    memset@GLIBC_2.0(v2, 0, 24);
    sprintf@GLIBC_2.0(v0, v1, a1->field_29);
    cout+512->field_14(&cout, v0);
    return cout+512->field_14(&cout, "\n");
}

