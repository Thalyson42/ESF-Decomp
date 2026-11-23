// ctdb.h -- modo "ESF Capture the Dragonballs". RECUPERADO de decomp_raw/CHalfLifeCaptureTheDragonBalls.
// Campos do gamerules acessados por offset (o tamanho da base CHalfLifeTeamplay nao e conhecido): GR_F(this,tipo,off).
#pragma once
#define GR_F(p, type, off) (*(type *)((char *)(p) + (off)))
enum {
    CTDB_BALLS_SPAWNED = 0x264,   // int  [OK] esferas criadas no mapa
    CTDB_RESPAWN_STONE = 0x268,   // int  [OK] apos desejo: proximo spawn ja vem em pedra (Stonify)
    CTDB_WISH_AVAILABLE = 0x26c,  // int  [OK] desejo disponivel (setado no Think apos spawn)
    CTDB_RESPAWN_TIME = 0x270,    // float[OK] hora do respawn (FinishWish: +45 s)
    CTDB_GATHERED = 0x274,        // int  [OK] 7 esferas juntas (brilhando)
    CTDB_BALLS = 0x278,           // CDragonBall*[7] [OK]
    CTDB_SHENLONG = 0x294,        // CShenlong*  [OK]
    CTDB_NO_BALLS = 0x298         // int  [OK] mapa sem item_dragonball suficientes
};
class CDragonBall;
class CHalfLifeCaptureTheDragonBalls : public CHalfLifeTeamplay
{
public:
    void Think(void);
    const char *GetGameDescription(void) { return "ESF Capture the Dragonballs"; }   // [OK]
    void InitHUD(CBasePlayer *pl);
    BOOL ClientCommand(CBasePlayer *pPlayer, const char *pcmd);
    void DragonBallPickUp(int nr, int iPlayerIndex);
    void DragonBallDrop(int nr, CDragonBall *pBall);
    BOOL PlayerUses(CBasePlayer *pPlayer);                 // [OK] vtable slot novo
    void SpawnDragonBalls(void);
    BOOL DragonBallsGathered(void);
    void FinishWish(CBasePlayer *pPlayer, int iPoints);
};
