// CHalfLifeCaptureTheDragonBalls.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CHalfLifeCaptureTheDragonBalls : public CHalfLifeTeamplay {  // base: heuristica
public:
    virtual void Think();  // vtable[0] Think__30CHalfLifeCaptureTheDragonBalls
    virtual void GetGameDescription();  // vtable[8] GetGameDescription__30CHalfLifeCaptureTheDragonBalls
    virtual void InitHUD();  // vtable[10] InitHUD__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer
    virtual void ClientCommand();  // vtable[22] ClientCommand__30CHalfLifeCaptureTheDragonBallsP11CBasePlayerPCc
    virtual void DragonBallPickUp();  // vtable[59] DragonBallPickUp__30CHalfLifeCaptureTheDragonBallsii
    virtual void DragonBallDrop();  // vtable[60] DragonBallDrop__30CHalfLifeCaptureTheDragonBallsiP11CDragonBall
    virtual void PlayerUses();  // vtable[61] PlayerUses__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_044;  // +0x44 (68)
    int f_264;  // +0x264 (612)
    int f_268;  // +0x268 (616)
    int f_26c;  // +0x26c (620)
    float f_270;  // +0x270 (624)
    int f_274;  // +0x274 (628)
    char f_278;  // +0x278 (632)
    int f_294;  // +0x294 (660)
    int f_298;  // +0x298 (664)
};
