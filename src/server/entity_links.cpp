// entity_links.cpp -- LINK_ENTITY_TO_CLASS das entidades ESF (funcoes livres de 38 bytes: GetClassPtr). [OK] vs decomp_raw/_funcoes_livres/<classname>.c
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "player_esf_manual.h"
#include "esf_extras.h"
#include "magicattack.h"
#include "afterimage.h"
#include "blob.h"
#include "bodypart.h"
#include "candy.h"
#include "controlledweapon.h"
#include "deathball.h"
#include "destructodisc.h"
#include "discattack.h"
#include "dragonball.h"
#include "explodingattack.h"
#include "eyelaser.h"
#include "finalflash.h"
#include "friezadisc.h"
#include "gallitgun.h"
#include "genericbeam.h"
#include "kamehameha.h"
#include "kametorpedo.h"
#include "kiattack.h"
#include "masenko.h"
#include "mouthblast.h"
#include "powerbeam.h"
#include "powerstruggle.h"
#include "renzoku.h"
#include "scattershot.h"
#include "shenlong.h"
#include "shieldattack.h"
#include "specialbeamcannon.h"
#include "spiritbomb.h"
#include "spiritbombattack.h"
#include "swoop.h"
#include "tasks.h"
#include "telekinesis.h"

// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(afterimage, CAfterImage);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(aura, CAura);
LINK_ENTITY_TO_CLASS(bean, CBean);
LINK_ENTITY_TO_CLASS(bot, CBot);
LINK_ENTITY_TO_CLASS(candy, CCandy);
LINK_ENTITY_TO_CLASS(dragonball, CDragonBall);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(env_model, CEnvModel);
LINK_ENTITY_TO_CLASS(explodingattack, CExplodingAttack);
LINK_ENTITY_TO_CLASS(fog, CFog);
LINK_ENTITY_TO_CLASS(guidedattack, CGuidedAttack);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(item_dragonball, CDragonBallPoint);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(item_sensubeanbag, CSensuBeanBag);
LINK_ENTITY_TO_CLASS(magicattack, CMagicAttack);
LINK_ENTITY_TO_CLASS(powerstruggle, CPowerStruggle);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(scatterattack, CScatterAttack);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(scattersplit, CScatterSplit);
LINK_ENTITY_TO_CLASS(shenlong, CShenlong);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_bigbang, CBigBang);
LINK_ENTITY_TO_CLASS(weapon_bodypart, CBodyPart);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_burningattack, CBurningAttack);
LINK_ENTITY_TO_CLASS(weapon_candy, CCandyAttack);
LINK_ENTITY_TO_CLASS(weapon_charged, CChargedAttack);
LINK_ENTITY_TO_CLASS(weapon_controlled, CControlledBeam);
LINK_ENTITY_TO_CLASS(weapon_deathball, CDeathBall);
LINK_ENTITY_TO_CLASS(weapon_destructodisc, CDestructoDisc);
LINK_ENTITY_TO_CLASS(weapon_dragonball, CCariedDragonBall);
LINK_ENTITY_TO_CLASS(weapon_eyelaser, CEyelaser);
LINK_ENTITY_TO_CLASS(weapon_finalflash, CFinalFlash);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_fingerlaser, CFingerLaser);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_finishingbuster, CFinishingBuster);
LINK_ENTITY_TO_CLASS(weapon_friezadisc, CFriezaDisc);
LINK_ENTITY_TO_CLASS(weapon_gallitgun, CGallitGun);
LINK_ENTITY_TO_CLASS(weapon_genericbeam, CGenericBeam);
LINK_ENTITY_TO_CLASS(weapon_kamehameha, CKamehameha);
LINK_ENTITY_TO_CLASS(weapon_kametorpedo, CKameTorpedo);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_kiblast, CKiBlast);
LINK_ENTITY_TO_CLASS(weapon_masenko, CMasenko);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_melee, CMelee);
LINK_ENTITY_TO_CLASS(weapon_mouthblast, CMouthblast);
LINK_ENTITY_TO_CLASS(weapon_powerbeam, CPowerBeam);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_regeneration, CRegeneration);
LINK_ENTITY_TO_CLASS(weapon_renzoku, CRenzoku);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_scatterbeam, CScatterBeam);
LINK_ENTITY_TO_CLASS(weapon_scattershot, CScatterShot);
LINK_ENTITY_TO_CLASS(weapon_sensu, CSensuBean);
LINK_ENTITY_TO_CLASS(weapon_shieldattack, CShieldAttack);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_solarflare, CSolarFlare);
LINK_ENTITY_TO_CLASS(weapon_specialbeamcannon, CSpecialBeamCannon);
LINK_ENTITY_TO_CLASS(weapon_spiritbomb, CSpiritBomb);
// [PENDENTE: classe ainda nao recuperada] LINK_ENTITY_TO_CLASS(weapon_sword, CSword);
LINK_ENTITY_TO_CLASS(weapon_telekinesis, CTelekinesis);
