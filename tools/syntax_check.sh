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
open(p,'w').write(t)
PY
  python3 - "$B/dlls/cbase.h" <<'PY'
import sys
p=sys.argv[1]; t=open(p).read()
k=t.index('virtual void Touch(')
t=t[:k]+'virtual void TouchedByPlayer(class CBasePlayer *) {}   // [?] ESF vtable +0xb4\n\t'+t[k:]
open(p,'w').write(t)
PY
fi
INC="-I include -I $B/dlls -I $B/engine -I $B/common -I $B/pm_shared -I $B/public"
for f in "$@"; do
  echo "== $f"
  LC_ALL=C g++ -fsyntax-only -fpermissive -w -std=gnu++98 $INC -DLINUX -D_LINUX "$f" 2>&1 | grep -E "error" | cut -c1-170
done
