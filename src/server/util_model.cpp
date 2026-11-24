// util_model.cpp -- UTIL_Model_*: envia a mensagem "ManipModel" ao cliente (efeitos de modelo: aura, grab, melee struggle...).
// Formato: MSG_ALL, byte = acao, short = indice do jogador (+ extras). [OK] @0x134890..0x134e50
#include "extdll.h"
#include "util.h"
#include "cbase.h"

extern int gmsgManipModel;

static inline void ManipBegin(int act, int ent)
{
	MESSAGE_BEGIN(MSG_ALL, gmsgManipModel);
		WRITE_BYTE(act);
		WRITE_SHORT(ent);
}

void UTIL_Model_RemoveAll(int iEnt)   { ManipBegin(0, iEnt); MESSAGE_END(); }
void UTIL_Model_Connect(int iEnt1, int iEnt2, int iType)
{
	MESSAGE_BEGIN(MSG_ALL, gmsgManipModel);
		WRITE_BYTE(1);
		WRITE_SHORT(iEnt1);
		WRITE_SHORT(iEnt2);
		WRITE_BYTE(iType);
	MESSAGE_END();
}
void UTIL_Model_FixAngles(int iEnt)   { ManipBegin(2, iEnt); MESSAGE_END(); }
void UTIL_Model_FixAngles(int iEnt, Vector vecAngles)
{
	ManipBegin(3, iEnt);
		WRITE_COORD(vecAngles.x);
		WRITE_COORD(vecAngles.y);
		WRITE_COORD(vecAngles.z);
	MESSAGE_END();
}
void UTIL_Model_Grab(int iEnt1, int iEnt2)
{
	ManipBegin(4, iEnt1);
		WRITE_SHORT(iEnt2);
	MESSAGE_END();
}
void UTIL_Model_MeleeStruggle(int iEnt1, int iEnt2)
{
	ManipBegin(5, iEnt1);
		WRITE_SHORT(iEnt2);
	MESSAGE_END();
}
void UTIL_Model_MeleeStruggle_Anglefix(int iEnt, Vector vecAngles)
{
	ManipBegin(6, iEnt);
		WRITE_COORD(vecAngles.x);
		WRITE_COORD(vecAngles.y);
		WRITE_COORD(vecAngles.z);
	MESSAGE_END();
}
void UTIL_Model_Switch(int iEnt)      { ManipBegin(7, iEnt); MESSAGE_END(); }
void UTIL_Model_RecBonePos(int iEnt)  { ManipBegin(8, iEnt); MESSAGE_END(); }
void UTIL_Model_MotionBlur(int iEnt1, int iEnt2)
{
	ManipBegin(9, iEnt1);
		WRITE_SHORT(iEnt2);
	MESSAGE_END();
}
void UTIL_Model_AuraBend(int iEnt)    { ManipBegin(10, iEnt); MESSAGE_END(); }
// iAction limitado a 11..16 [OK]
void UTIL_Model_Remove(int iEnt, int iAction)
{
	if (iAction <= 10) iAction = 11;
	else if (iAction > 16) iAction = 16;
	ManipBegin(iAction, iEnt);
	MESSAGE_END();
}
