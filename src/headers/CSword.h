// CSword.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSword : public CMelee {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__6CSword
    virtual void Precache();  // vtable[1] Precache__6CSword
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__6CSwordP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__6CSword
    virtual void Holster();  // vtable[63] Holster__6CSwordi
    virtual void iItemSlot();  // vtable[74] iItemSlot__6CSword
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_088;  // +0x88 (136)
};
