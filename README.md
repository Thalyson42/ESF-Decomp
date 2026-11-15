# ESF – Source Recovery (Half-Life mod "Earth's Special Forces")

Recuperação (engenharia reversa / decomp) do código-fonte C++ do mod ESF, cujo código original foi perdido.
Os desenvolvedores originais confirmaram que não possuem mais o fonte.

> Este repositório **não contém os binários nem os assets do mod** (direitos dos autores originais). Só código recuperado, símbolos e ferramentas.

## Estado atual
| Módulo | Binário de origem | Símbolos? | Estado |
|---|---|---|---|
| Servidor / gameplay (`hl.dll`) | `linuxdlls/hl_i386.so` (com símbolos) + `dlls/hl.dll` | **Sim**, 3.885 funções / 300 classes | Esqueleto gerado (`src/server`), corpos pendentes |
| Bot (`esf_bot.dll`) | `esf_bot/esf_bot.dll` | exports (179) | Pendente (parece ser projeto separado, "ESF Bot 4.0") |
| Cliente (`client.dll`) | `cl_dlls/client.dll` | exports (505, VGUI) | Pendente |
| `fmod.dll`, `esfdll.dll` | — | — | **Não fazem parte do mod** (ver docs/FINDINGS.md) |

Versão que as strings dos binários dizem ser: **"ESF Beta 1.2.1, Public Version"** (ver FINDINGS).

## Estrutura
- `symbols/` – nomes de classes/métodos/endereços extraídos dos binários
- `src/server/` – um `.cpp` por arquivo original (nomes vêm do próprio .so), com métodos listados e `TODO: decompile`
- `tools/` – scripts (demangler do GCC 2.95, decompilação por função com angr)
- `docs/` – achados e roadmap

Veja `docs/ROADMAP.md`.
