#!/usr/bin/env python3
# gen_tasks.py -- gera include/tasks.h e src/bot/tasks_consts.cpp a partir de decomp_raw/*Task
# Funcoes que so retornam uma constante (TaskIdentify, Get*Checks, ShouldManageEnemies, ReactOnDanger simples) sao
# emitidas prontas; as demais (TaskThink e logica) ficam declaradas e sao escritas a mao em src/bot/<classe>.cpp.
import os,re,glob
RAW='decomp_raw'
ORDER=['GetNesserelyChecks','GetBotStatusChecks','GetBotSenseChecks','GetBotMiscChecks','TaskThink','TaskIdentify','ShouldManageEnemies']
RET={'GetNesserelyChecks':'int','GetBotStatusChecks':'int','GetBotSenseChecks':'int','GetBotMiscChecks':'int','TaskThink':'void','TaskIdentify':'int','ShouldManageEnemies':'BOOL'}
def const_ret(path):
    t=open(path).read()
    body=t[t.index('{',t.index(os.path.basename(path).split('__')[0])):]
    lines=[l.strip() for l in body.splitlines() if l.strip() and not l.strip().startswith('//')]
    if len(lines)==3 and lines[0]=='{' and lines[2]=='}':
        m=re.fullmatch(r'return (0x[0-9a-f]+|\d+);',lines[1])
        if m: return int(m.group(1),0)
    return None
EXTRA={'CShootScatterShotsTask':['CBaseEntity *GetFurthestScatterShot(void);'],
       'CBeamJumpTask':[],
       'CDrainEntsTask':['void DrainPlayer(CBasePlayer *pVictim);','void DrainAttack(CBaseEntity *pAttack);'],
       'CSwoopTask':['float GetSwoopLifeTime(void);','void CheckSecondaryFire(void);','void SelectSwoopType(void);','BOOL IsAvoidDangerSwoop(void);'],
       'CCombatTask':['int GetAttackIndex(int iAttack);','float GetMaxDistForAttackById(int iAttack);','float GetMaxDistForAttackByTableIndex(int iIndex);','float GetMinDistForAttackById(int iAttack);','float GetMinDistForAttackByTableIndex(int iIndex);','int GetAttackPercent(CBasePlayer *pEnemy, int iAttack);','void PrepareAttack(int iAttack, EComboUse eUse);','void AttackWithMelee(BOOL fCombo);'],
       'CDBTask':['BOOL GoToDB(void);','BOOL GoToDBSpot(void);','BOOL GoToGatheredSpot(void);','BOOL CheckThrowToDBSpot(void);','BOOL HeadToNextDBWP(void);'],
       'CNormalMovementTask':['void BotCheckUpDown(void);','void BotLook(void);','void BotTurnAtWall(Vector *pvecWallNormal);','void CheckFOV(void);','void CheckSkyBox(void);'],
       'CFinishMeleeTask':['BOOL IsValidThrowVictim(CBasePlayer *pVictim);','void CheckPlayerToThrowAt(void);','void CheckObstacleToThrowAt(void);'],
       'CAbsorbHealthTask':['BOOL ShootAbsorbHealthBeams(void);'],
       'CKameTorpTask':['void ChargeKameTorps(void);','short CountTorps(void);','BOOL SetMoveAwayDir(void);']}   # funcoes proprias escritas a mao
classes=sorted(d for d in os.listdir(RAW) if d.endswith('Task') and d!='CBaseTask')
h=['// tasks.h -- GERADO por tools/gen_tasks.py: declaracoes das tarefas do bot (todas derivam de CBaseTask).','#pragma once','#include "bot.h"','']
c=['// tasks_consts.cpp -- GERADO por tools/gen_tasks.py: metodos de tarefa que so devolvem constante.','// [OK] valores lidos de decomp_raw/<classe>/*.c. TaskThink e logica complexa: um .cpp por classe em src/bot/.','#include "extdll.h"','#include "util.h"','#include "cbase.h"','#include "player.h"','#include "tasks.h"','']
ids={}
for cl in classes:
    d=os.path.join(RAW,cl); h.append('class %s : public CBaseTask\n{\npublic:'%cl)
    for m in ORDER:
        f=glob.glob(os.path.join(d,m+'__*.c'))
        if not f: continue
        v=const_ret(f[0])
        h.append('    virtual %s %s(void);'%(RET[m],m))
        if v is not None:
            if m=='TaskIdentify': ids[cl]=v
            c.append('%s %s::%s(void) { return %s; }'%(RET[m],cl,m,v))
    f=glob.glob(os.path.join(d,'ReactOnDanger__*.c'))
    if f:
        h.append('    virtual BOOL ReactOnDanger(danger_info_s *pDanger);')
        v=const_ret(f[0]) if True else None
        if v is not None: c.append('BOOL %s::ReactOnDanger(danger_info_s *) { return %s; }'%(cl,v))
    for e in EXTRA.get(cl,[]): h.append('    '+e)
    h.append('};\n')
h.append('enum ETaskId {')
for cl,v in sorted(ids.items(),key=lambda x:x[1]): h.append('    TASK_%s = %d,'%(cl[1:-4].upper(),v))
h.append('};')
open('include/tasks.h','w').write('\n'.join(h)+'\n'); open('src/bot/tasks_consts.cpp','w').write('\n'.join(c)+'\n')
print(len(classes),'classes;',len(c)-8,'funcoes geradas')
