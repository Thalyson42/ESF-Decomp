// CHalfLifeMultiplay.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CHalfLifeMultiplay : public CGameRules {  // base: SDK
public:
    virtual void Think();  // vtable[0] Think__18CHalfLifeMultiplay
    virtual void IsAllowedToSpawn();  // vtable[1] IsAllowedToSpawn__18CHalfLifeMultiplayP11CBaseEntity
    virtual void FShouldSwitchWeapon();  // vtable[2] FShouldSwitchWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem
    virtual void GetNextBestWeapon();  // vtable[3] GetNextBestWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem
    virtual void IsMultiplayer();  // vtable[4] IsMultiplayer__18CHalfLifeMultiplay
    virtual void IsDeathmatch();  // vtable[5] IsDeathmatch__18CHalfLifeMultiplay
    virtual void IsCoOp();  // vtable[7] IsCoOp__18CHalfLifeMultiplay
    virtual void GetGameDescription();  // vtable[8] GetGameDescription__18CHalfLifeMultiplay
    virtual void ClientConnected();  // vtable[9] ClientConnected__18CHalfLifeMultiplayP7edict_sPCcT2Pc
    virtual void InitHUD();  // vtable[10] InitHUD__18CHalfLifeMultiplayP11CBasePlayer
    virtual void ClientDisconnected();  // vtable[11] ClientDisconnected__18CHalfLifeMultiplayP7edict_s
    virtual void UpdateGameMode();  // vtable[12] UpdateGameMode__18CHalfLifeMultiplayP11CBasePlayer
    virtual void FlPlayerFallDamage();  // vtable[13] FlPlayerFallDamage__18CHalfLifeMultiplayP11CBasePlayer
    virtual void FPlayerCanTakeDamage();  // vtable[14] FPlayerCanTakeDamage__18CHalfLifeMultiplayP11CBasePlayerP11CBaseEntity
    virtual void PlayerSpawn();  // vtable[16] PlayerSpawn__18CHalfLifeMultiplayP11CBasePlayer
    virtual void PlayerThink();  // vtable[17] PlayerThink__18CHalfLifeMultiplayP11CBasePlayer
    virtual void FPlayerCanRespawn();  // vtable[18] FPlayerCanRespawn__18CHalfLifeMultiplayP11CBasePlayer
    virtual void FlPlayerSpawnTime();  // vtable[19] FlPlayerSpawnTime__18CHalfLifeMultiplayP11CBasePlayer
    virtual void GetPlayerSpawnSpot();  // vtable[20] GetPlayerSpawnSpot__18CHalfLifeMultiplayP11CBasePlayer
    virtual void AllowAutoTargetCrosshair();  // vtable[21] AllowAutoTargetCrosshair__18CHalfLifeMultiplay
    virtual void ClientCommand();  // vtable[22] ClientCommand__18CHalfLifeMultiplayP11CBasePlayerPCc
    virtual void IPointsForKill();  // vtable[24] IPointsForKill__18CHalfLifeMultiplayP11CBasePlayerT1
    virtual void PlayerKilled();  // vtable[25] PlayerKilled__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2
    virtual void DeathNotice();  // vtable[26] DeathNotice__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2
    virtual void CanHavePlayerItem();  // vtable[27] CanHavePlayerItem__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem
    virtual void PlayerGotWeapon();  // vtable[28] PlayerGotWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem
    virtual void WeaponShouldRespawn();  // vtable[29] WeaponShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerItem
    virtual void FlWeaponRespawnTime();  // vtable[30] FlWeaponRespawnTime__18CHalfLifeMultiplayP15CBasePlayerItem
    virtual void FlWeaponTryRespawn();  // vtable[31] FlWeaponTryRespawn__18CHalfLifeMultiplayP15CBasePlayerItem
    virtual void VecWeaponRespawnSpot();  // vtable[32] VecWeaponRespawnSpot__18CHalfLifeMultiplayP15CBasePlayerItem
    virtual void CanHaveItem();  // vtable[33] CanHaveItem__18CHalfLifeMultiplayP11CBasePlayerP5CItem
    virtual void PlayerGotItem();  // vtable[34] PlayerGotItem__18CHalfLifeMultiplayP11CBasePlayerP5CItem
    virtual void ItemShouldRespawn();  // vtable[35] ItemShouldRespawn__18CHalfLifeMultiplayP5CItem
    virtual void FlItemRespawnTime();  // vtable[36] FlItemRespawnTime__18CHalfLifeMultiplayP5CItem
    virtual void VecItemRespawnSpot();  // vtable[37] VecItemRespawnSpot__18CHalfLifeMultiplayP5CItem
    virtual void PlayerGotAmmo();  // vtable[39] PlayerGotAmmo__18CHalfLifeMultiplayP11CBasePlayerPci
    virtual void AmmoShouldRespawn();  // vtable[40] AmmoShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerAmmo
    virtual void FlAmmoRespawnTime();  // vtable[41] FlAmmoRespawnTime__18CHalfLifeMultiplayP15CBasePlayerAmmo
    virtual void VecAmmoRespawnSpot();  // vtable[42] VecAmmoRespawnSpot__18CHalfLifeMultiplayP15CBasePlayerAmmo
    virtual void FlHealthChargerRechargeTime();  // vtable[43] FlHealthChargerRechargeTime__18CHalfLifeMultiplay
    virtual void FlHEVChargerRechargeTime();  // vtable[44] FlHEVChargerRechargeTime__18CHalfLifeMultiplay
    virtual void DeadPlayerWeapons();  // vtable[45] DeadPlayerWeapons__18CHalfLifeMultiplayP11CBasePlayer
    virtual void DeadPlayerAmmo();  // vtable[46] DeadPlayerAmmo__18CHalfLifeMultiplayP11CBasePlayer
    virtual void GetTeamID();  // vtable[47] GetTeamID__18CHalfLifeMultiplayP11CBaseEntity
    virtual void PlayerRelationship();  // vtable[48] PlayerRelationship__18CHalfLifeMultiplayP11CBaseEntityT1
    virtual void PlayTextureSounds();  // vtable[54] PlayTextureSounds__18CHalfLifeMultiplay
    virtual void PlayFootstepSounds();  // vtable[55] PlayFootstepSounds__18CHalfLifeMultiplayP11CBasePlayerf
    virtual void FAllowMonsters();  // vtable[56] FAllowMonsters__18CHalfLifeMultiplay
    virtual void EndMultiplayerGame();  // vtable[57] EndMultiplayerGame__18CHalfLifeMultiplay
    virtual void UpdatePlayerStats();  // vtable[58] UpdatePlayerStats__18CHalfLifeMultiplay
    virtual void IsValidClass();  // vtable[62] IsValidClass__18CHalfLifeMultiplayPCcP11CBasePlayer
    virtual void ChangeLevel();  // vtable[65] ChangeLevel__18CHalfLifeMultiplay
    virtual void GoToIntermission();  // vtable[66] GoToIntermission__18CHalfLifeMultiplay
    virtual void 0();  // vtable[67] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_044;  // +0x44 (68)
    float f_048;  // +0x48 (72)
    int f_04c;  // +0x4c (76)
    float f_050;  // +0x50 (80)
    float f_054;  // +0x54 (84)
};
