// CHalfLifeTeamplay.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CHalfLifeTeamplay : public CHalfLifeMultiplay {  // base: SDK
public:
    virtual void Think();  // vtable[0] Think__17CHalfLifeTeamplay
    virtual void IsTeamplay();  // vtable[6] IsTeamplay__17CHalfLifeTeamplay
    virtual void GetGameDescription();  // vtable[8] GetGameDescription__17CHalfLifeTeamplay
    virtual void InitHUD();  // vtable[10] InitHUD__17CHalfLifeTeamplayP11CBasePlayer
    virtual void UpdateGameMode();  // vtable[12] UpdateGameMode__17CHalfLifeTeamplayP11CBasePlayer
    virtual void FPlayerCanTakeDamage();  // vtable[14] FPlayerCanTakeDamage__17CHalfLifeTeamplayP11CBasePlayerP11CBaseEntity
    virtual void ShouldAutoAim();  // vtable[15] ShouldAutoAim__17CHalfLifeTeamplayP11CBasePlayerP7edict_s
    virtual void ClientCommand();  // vtable[22] ClientCommand__17CHalfLifeTeamplayP11CBasePlayerPCc
    virtual void IPointsForKill();  // vtable[24] IPointsForKill__17CHalfLifeTeamplayP11CBasePlayerT1
    virtual void PlayerKilled();  // vtable[25] PlayerKilled__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2
    virtual void DeathNotice();  // vtable[26] DeathNotice__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2
    virtual void GetTeamID();  // vtable[47] GetTeamID__17CHalfLifeTeamplayP11CBaseEntity
    virtual void PlayerRelationship();  // vtable[48] PlayerRelationship__17CHalfLifeTeamplayP11CBaseEntityT1
    virtual void GetTeamIndex();  // vtable[49] GetTeamIndex__17CHalfLifeTeamplayPCc
    virtual void GetIndexedTeamName();  // vtable[50] GetIndexedTeamName__17CHalfLifeTeamplayi
    virtual void IsValidTeam();  // vtable[51] IsValidTeam__17CHalfLifeTeamplayPCc
    virtual void ChangePlayerTeam();  // vtable[52] ChangePlayerTeam__17CHalfLifeTeamplayP11CBasePlayerPCcii
    virtual void SetDefaultPlayerTeam();  // vtable[53] SetDefaultPlayerTeam__17CHalfLifeTeamplayP11CBasePlayer
    virtual void IsValidClass();  // vtable[62] IsValidClass__17CHalfLifeTeamplayPCcP11CBasePlayer
    virtual void JoinTeam();  // vtable[67] JoinTeam__17CHalfLifeTeamplayP11CBasePlayerPCc
    virtual void 0();  // vtable[68] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_044;  // +0x44 (68)
    float f_050;  // +0x50 (80)
    float f_054;  // +0x54 (84)
    int f_058;  // +0x58 (88)
    int f_05c;  // +0x5c (92)
    int f_060;  // +0x60 (96)
};
