# Roadmap

1. **Fase 0 – Inventário** ✔ símbolos, lista de arquivos, classes, exports.
   **Fase 3a ✔** pseudo-C bruto de todas as funções do .so (`decomp_raw/`).
2. **Fase 1 – Base**: importar Half-Life SDK 2.x como base (headers + código que não mudou) e marcar o que é ESF-específico.
3. **Fase 2 – Layout de classes**: reconstruir offsets de membros (ex.: `CBasePlayer`, `CPlayerMelee`) a partir dos acessos `*(this+N)` nas funções. Gerar `.h` por classe.
4. **Fase 3 – Decompilar por arquivo** (`tools/decompile_fn.py`), começando pelos pequenos e de SDK (`util`, `subs`, `doors`, `buttons`…), depois ESF (`kamehameha`, `finalflash`, `goku`…), por último AI/bot.
5. **Fase 4 – Compilar** (GitHub Actions com MinGW/MSVC) e comparar comportamento com o `hl.dll` original.
6. **Fase 5 – Cliente** (`client.dll`) e bot.

Dados do trabalho decompilado são verificados comparando cada função com a mesma no `hl.dll` do Windows.

## Fase 2/3 – status (14/11/2026)
- `tools/sdk_match.py` compara cada função decompilada com a função de mesmo nome no HL SDK -> `docs/sdk_match.csv`.
- Resultado: 1.020 funções têm equivalente no SDK: **864 provavelmente idênticas**, 127 parciais, 29 modificadas pelo ESF
  (ex.: `CBasePlayer::PreThink/Killed/TakeDamage/PostThink/Jump`). 2.910 não têm equivalente (código do ESF, ou funções livres que o script ainda não cobre).
- Heurística (strings, nomes chamados, constantes): serve para triagem, não prova. Funções triviais/inline podem aparecer como falso positivo.
- Próximo: usar o código do SDK como base das 864 "prováveis iguais" e reescrever à mão as 156 parciais/modificadas, depois as classes do ESF.

## Fase 2 – headers reconstruídos (14/11/2026)
- `tools/recover_classes.py` gera `src/headers/<Classe>.h` (+ `classes.json`) de 306 classes:
  métodos virtuais **na ordem da vtable** (via relocações do .so), campos por offset (observados nas funções decompiladas)
  e classe-base. Base = declaração real do SDK quando existe (132 classes); senão heurística pela vtable (marcada "base: heuristica", REVISAR).
- Os campos ainda se chamam `f_XXX` (offset). Renomear usando o SDK (`entvars_t`, `CBaseEntity`...) é o próximo passo.
