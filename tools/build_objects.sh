#!/bin/bash
# Compila TODOS os .cpp de src/ para .o (32-bit por padrao) e gera o relatorio de ligacao/comparacao.
# Uso: HLSDK=/caminho/hlsdk BUILD=/caminho/esf_sdk OBJ_DIR=/caminho/obj tools/build_objects.sh [relatorio.md]
# Variaveis: CXX_M="-m32" (padrao; use CXX_M="" para teste local sem libs 32-bit)
set -u
cd "$(dirname "$0")/.."
export OBJ_DIR=${OBJ_DIR:-/tmp/esf_obj}
REPORT=${1:-docs/BUILD_REPORT.md}
rm -rf "$OBJ_DIR"; mkdir -p "$OBJ_DIR"
FILES=$(find src -name '*.cpp' | grep -v 'sdk/mpstubb.cpp' | sort)
LOG=$OBJ_DIR/compile_errors.log
: > "$LOG"
tools/syntax_check.sh $FILES >> "$LOG" 2>&1
NERR=$(grep -c "error" "$LOG")
echo "arquivos: $(echo "$FILES" | wc -l); linhas de erro: $NERR"
python3 tools/link_report.py "$OBJ_DIR" "$REPORT"
# erros de compilacao tambem entram no relatorio
{ echo; echo '## Erros de compilacao'; echo; echo '```'; grep -B1 "error" "$LOG" | head -300; echo '```'; } >> "$REPORT"
