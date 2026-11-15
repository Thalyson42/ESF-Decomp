// CGameText.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGameText : public CRulePointEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__9CGameTextP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CGameTextR5CSave
    virtual void Restore();  // vtable[4] Restore__9CGameTextR8CRestore
    virtual void Use();  // vtable[44] Use__9CGameTextP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    char m_textParms[40];  // +0x68 (104) FIELD_CHARACTER  [save-table]
    float f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    char f_074;  // +0x74 (116)
    char f_075;  // +0x75 (117)
    char f_076;  // +0x76 (118)
    char f_077;  // +0x77 (119)
    char f_078;  // +0x78 (120)
    char f_079;  // +0x79 (121)
    char f_07a;  // +0x7a (122)
    char f_07b;  // +0x7b (123)
    float f_07c;  // +0x7c (124)
    float f_080;  // +0x80 (128)
    float f_084;  // +0x84 (132)
    float f_088;  // +0x88 (136)
    int f_08c;  // +0x8c (140)
};
