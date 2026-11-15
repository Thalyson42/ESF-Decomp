// CBodySlice.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBodySlice : public CGib {  // base: heuristica
public:
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float f_008;  // +0x8 (8)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    float f_010;  // +0x10 (16)
    int f_050;  // +0x50 (80)
    int f_054;  // +0x54 (84)
    int f_058;  // +0x58 (88)
    float f_174;  // +0x174 (372)
    float f_178;  // +0x178 (376)
    float f_17c;  // +0x17c (380)
    void* f_208;  // +0x208 (520)
};
