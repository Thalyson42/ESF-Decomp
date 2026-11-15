# Roadmap

1. **Fase 0 – Inventário** ✔ símbolos, lista de arquivos, classes, exports.

2. **Fase 1 – Base**: importar Half-Life SDK 2.x como base (headers + código que não mudou) e marcar o que é ESF-específico.
3. **Fase 2 – Layout de classes**: reconstruir offsets de membros (ex.: `CBasePlayer`, `CPlayerMelee`) a partir dos acessos `*(this+N)` nas funções. Gerar `.h` por classe.
4. **Fase 3 – Decompilar por arquivo** (`tools/decompile_fn.py`), começando pelos pequenos e de SDK (`util`, `subs`, `doors`, `buttons`…), depois ESF (`kamehameha`, `finalflash`, `goku`…), por último AI/bot.
5. **Fase 4 – Compilar** (GitHub Actions com MinGW/MSVC) e comparar comportamento com o `hl.dll` original.
6. **Fase 5 – Cliente** (`client.dll`) e bot.

Dados do trabalho decompilado são verificados comparando cada função com a mesma no `hl.dll` do Windows.
