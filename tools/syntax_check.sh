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
j=t.index('public:',i)+len('public:')
t=t[:j]+'\n\t#include "player_esf.h"\n\tESF_PLAYER_FIELDS\n'+t[j:]
open(p,'w').write(t)
PY
fi
INC="-I include -I $B/dlls -I $B/engine -I $B/common -I $B/pm_shared -I $B/public"
for f in "$@"; do
  echo "== $f"
  g++ -fsyntax-only -fpermissive -w -std=gnu++98 $INC -DLINUX -D_LINUX "$f" 2>&1 | grep -E "error" | cut -c1-170
done
