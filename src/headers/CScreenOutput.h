// CScreenOutput.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CScreenOutput : public CBaseOutput {  // base: heuristica
public:
    virtual void _._13CScreenOutput();  // vtable[0] _._13CScreenOutput
    virtual void Display();  // vtable[1] Display__13CScreenOutput
    virtual void AddToTextString();  // vtable[3] AddToTextString__13CScreenOutputPCc
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    char f_001;  // +0x1 (1)
    void* f_200;  // +0x200 (512)
    short f_204;  // +0x204 (516)
    short f_206;  // +0x206 (518)
    short f_208;  // +0x208 (520)
    short f_20a;  // +0x20a (522)
    short f_20c;  // +0x20c (524)
    short f_20e;  // +0x20e (526)
};
