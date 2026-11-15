// ExecuteMenuCommand__5NMenui @0x16e0a0 size=106
typedef struct st_56e0a0_0 {
    unsigned int field_0;
} st_56e0a0_0;

extern st_56e0a0_0 *_5NMenu.pCurrentMenuFunction;
extern unsigned short _5NMenu.CurrentMenuChoice;
extern unsigned int _5NMenu.CurrentMenuText;

unsigned int * ExecuteMenuCommand__5NMenui(unsigned int a0)
{
    unsigned int *v0;  // eax

    if (!_5NMenu.pCurrentMenuFunction || !_5NMenu.CurrentMenuText || a0 == 0xffffffff)
    {
        sub_48c740(0);
    }
    else
    {
        _5NMenu.CurrentMenuChoice = a0;
        _5NMenu.pCurrentMenuFunction();
    }
    v0 = &_5NMenu.CurrentMenuText;
    if (_5NMenu.CurrentMenuText)
        v0 = sub_488400();
    return v0;
}

