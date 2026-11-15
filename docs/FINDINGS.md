# Achados da análise inicial

## Arquivos
- `linuxdlls/hl_i386.so` — 2,5 MB, ELF 32-bit, **not stripped**. Compilado com GCC 2.95 (ABI antigo de name-mangling; o `c++filt` moderno NÃO demangla, por isso `tools/demangle_gcc2.py`).
  - 3.885 funções globais, 1.403 funções livres (C-like) + ~3.090 métodos em 300 classes.
  - Lista de 121 arquivos `.cpp`/`.c` originais (animating, bigbang, kamehameha, finalflash, goku, frieza, bot*.cpp, pm_shared.c …).
  - Os 161 métodos exportados pelo `hl.dll` (Windows, MSVC) existem todos no .so => mesma base de código.
- `dlls/hl.dll` — 1 MB, MSVC, 339 exports com nomes C++ (`?Nome@Classe@@...`). Timestamp 2004-11-15.
- `cl_dlls/client.dll` — 880 KB, HUD/VGUI, 505 exports. Timestamp 2004-11-15.
- `esf_bot/esf_bot.dll` — 573 KB, 179 exports. Timestamp 2004-05.
- `esfdll.dll` (de `$PLUGINSDIR`) — **helper do instalador** (exports `createlog, createpatchlog, deletepath, ishlrunning, replace, strip`). Não é código do mod.
- `fmod.dll` — biblioteca de áudio FMOD de terceiros. A cópia solta e a de `cl_dlls/` têm hashes diferentes (uma é UPX). Não precisa ser recuperada, só usada como dependência.

## Pontos de atenção
- As strings do `hl.dll` e do `.so` dizem **ESF Beta 1.2.1**. Se o instalador era "1.2.3", ou a string de versão não foi atualizada, ou o .so/.dll são de build anterior. Precisa conferir via `liblist.gam`, `titles.txt`, `delta.lst` e comparação de funções entre .so e .dll.
- O mod é baseado no **Half-Life SDK 2.x** (public). Estruturas base (`entvars_t`, `CBaseEntity`, `CBasePlayer`, `pm_shared.c`, `gamerules`, etc.) podem ser tiradas do SDK oficial; só o que é específico do ESF precisa ser reconstruído.
- `pm_shared.c`, `pm_math.c`, `pm_debug.c` são do SDK, quase idênticos ao original.
- `esf_bot` provavelmente é de outro autor (ESF Bot 4.0). Respeitar créditos.

## Limitações honestas
Não existe como recuperar o código *idêntico* (comentários, nomes de variáveis locais, organização de headers). O resultado realista é C++ **funcionalmente equivalente**, com nomes de classes/métodos originais e variáveis renomeadas por nós.
