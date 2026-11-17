#!/bin/bash
# Checagem de sintaxe (sem linkar) das fontes recuperadas, contra uma CÓPIA do HL SDK com os campos ESF injetados
# em CBasePlayer (include/player_esf.h). Uso: tools/syntax_check.sh arquivo.cpp [...]   (HLSDK=/caminho/hlsdk)
H=${HLSDK:-/home/claude/hlsdk}
B=${BUILD:-/tmp/esf_sdk}
if [ ! -d $B ]; then
  mkdir -p $B && cp -r $H/dlls $H/engine $H/common $H/pm_shared $H/public $B/
  # injeta os campos ESF logo após "public:" da CBasePlayer
  python3 - "$B/dlls/player.h" <<'PY'
import sys,re
p=sys.argv[1]; t=open(p).read()
i=t.index('class CBasePlayer')
pre='class CBasePlayer;\n#include "playermelee.h"\n#include "player_esf.h"\n#include "player_esf_methods.h"\n#include "player_esf_manual.h"\n#include "esf_extras.h"\n'
j=t.index('public:',i)+len('public:')
t=t[:i]+pre+t[i:j]+'\n\tESF_PLAYER_FIELDS\n\tESF_PLAYER_UNNAMED\n\tESF_PLAYER_METHODS\n\tESF_PLAYER_EXTRA\n'+t[j:]
# funções que o ESF define fora de linha (no SDK são inline no header): vira só declaração
import re,glob
names=set()
for f in glob.glob('src/server/*.cpp'):
    for l in open(f,errors='ignore'):
        m=re.match(r'^[\w:\*& ]+?CBasePlayer::(\w+)\(',l)
        if m: names.add(m.group(1))
for n in names:
    t=re.sub(r'(\b%s\s*\([^)]*\))\s*(const)?\s*\{[^{}]*\}'%n, r'\1;', t)
open(p,'w').write(t)
PY
  python3 - "$B/dlls/cbase.h" <<'PY'
import sys
p=sys.argv[1]; t=open(p).read()
k=t.index('virtual void Touch(')
t=t[:k]+'virtual void TouchedByPlayer(class CBasePlayer *) {}   // [?] ESF vtable +0xb4\n\t'+t[k:]
open(p,'w').write(t)
PY
  python3 - "$B/dlls/weapons.h" "$B/dlls/cbase.h" <<'PY'
import sys
w=sys.argv[1]; t=open(w).read()
k=t.index('class CBasePlayerItem : public CBaseAnimating')
k=t.index('public:',k)+7
t=t[:k]+'\n\tfloat f_1f4; int f_1f8; int f_1fc;  /* [?] campos ESF da arma */ virtual int vf_158(void) { return 0; }  virtual int vf_104(int) { return 0; }  virtual int vf_fc(void) { return 0; }   // [?] ESF\n'+t[k:]
open(w,'w').write(t)
c=sys.argv[2]; t=open(c).read()
k=t.index('virtual void Touch(')
t=t[:k]+'virtual class CBaseEntity *vfunc_12c(void) { return 0; } virtual int vfunc_item_28(void) { return 0; } virtual int vfunc_104(int) { return 0; } virtual int vfunc_fc(void) { return 0; } virtual int vfunc_item_18(void) { return 0; }   // [?]\n\t'+t[k:]
open(c,'w').write(t)
PY
  python3 - "$B/dlls/gamerules.h" <<'PY'
import sys
g=sys.argv[1]; t=open(g).read()
k=t.index('class CGameRules')
k=t.index('public:',k)+7
t=t[:k]+'\n\tvirtual void UpdatePowerLevels(void) {}   // [?] ESF\n\tint m_iHighestPL;   // [?]\n'+t[k:]
k=t.index('class CHalfLifeMultiplay')
k=t.index('public:',k)+7
t=t[:k]+'\n\tint m_iAveragePL;                                   // [?] ESF\n\tvirtual void GiveBaseItems(CBasePlayer *pPlayer) {}  // [?] vtable +0xf0\n'+t[k:]
open(g,'w').write(t)
PY
  python3 - "$B/dlls/teamplay_gamerules.h" <<'PY'
import sys
g=sys.argv[1]; t=open(g).read()
k=t.index('public:',t.index('class CHalfLifeTeamplay'))+7
t=t[:k]+'\n\tconst char *WeakestTeam(CBasePlayer *pPlayer);   // [?] ESF\n'+t[k:]
open(g,'w').write(t)
PY
fi
INC="-I include -I $B/dlls -I $B/engine -I $B/common -I $B/pm_shared -I $B/public -I $H/game_shared"
for f in "$@"; do
  echo "== $f"
  LC_ALL=C g++ -fsyntax-only -fpermissive -w -std=gnu++11 -Dstricmp=strcasecmp -Dstrnicmp=strncasecmp $INC -DLINUX -D_LINUX "$f" 2>&1 | grep -E "error" | cut -c1-170
done
