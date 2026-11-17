# ESF – Source Recovery (Half-Life mod "Earth's Special Forces")

Recuperação (engenharia reversa / decomp) do código-fonte C++ do mod ESF, cujo código original foi perdido.
Os desenvolvedores originais confirmaram que não possuem mais o fonte.


## Estado atual (17/11/2026)
| Módulo | Binário de origem | Estado |
|---|---|---|
| Servidor / gameplay (`hl.dll`, `hl_i386.so` com símbolos: 3.885 funções / 300 classes) | `linuxdlls/hl_i386.so` + `dlls/hl.dll` | **Recuperado em grande parte** (ver abaixo); todo `src/server/` passa na checagem de **sintaxe** (ainda NÃO linka nem foi comparado com o binário) |
| Bot (`esf_bot.dll`) | `esf_bot/esf_bot.dll` | Pendente (projeto separado, "ESF Bot 4.0") |
| Cliente (`client.dll`) | `cl_dlls/client.dll` | Pendente |
| `fmod.dll`, `esfdll.dll` | — | **Não fazem parte do mod** (ver docs/FINDINGS.md) |

Versão que as strings dos binários dizem ser: **"ESF Beta 1.2.1, Public Version"** (ver FINDINGS).

### O que já foi recuperado (servidor)
- **864 funções iguais ao HL SDK**, montadas por `tools/assemble_sdk.py` em `src/server/sdk/` (arquivos originais do SDK com só as funções que o ESF reproduz) + revisão das ~156 "parciais" (5 conferidas linha a linha, 56 por heurística, o resto reescrito à mão).
- **Reescrito à mão a partir do decomp** (marcadores `[OK]` = conferido, `[?]` = adivinhado):
  - `playermelee.cpp` – sistema de combate corpo a corpo (`CPlayerMelee`, 201/201 funções, ~3.000 linhas);
  - `player.cpp`, `player_esf.cpp` – `CBasePlayer` do ESF (Jump, PreThink/PostThink, TakeDamage, Killed, UpdateClientData, power level, ki...);
  - `gamerules_esf.cpp`, `esf_mods.cpp` – regras de jogo (Multiplay/Teamplay: Think, PlayerSpawn, ChangePlayerTeam, ClientCommand...) e funções do SDK que o ESF alterou (CWorld::Precache, CGib, TakeDamage, TraceBleed...);
  - `classes.cpp` + `include/esf_classes.h` – `CBaseClass` e as 18 classes de personagem (Goku, Vegeta, Frieza, Cell, Buu, Gohan, Krillin, Piccolo, Trunks e suas formas);
  - ataques de ki: `kamehameha`, `gallitgun`, `controlledweapon` (CControlledBeam), `magicattack`/`explodingattack` (CMagicAttack, CExplodingAttack, CBeamAttack, CGuidedAttack), `powerstruggle`.
- Resumo detalhado por classe em `docs/RECOVERED.md`.

### Descobertas sobre o ESF (resumo)
Ki em `pev->fuser4`; times Good(2)/Evil(1); dano com flag `0x4000000` não empurra; sangramento só por CRUSH/SLASH/BLAST/MORTAR; sem lanterna; sem mensagens Damage/Geiger/Train/Battery/Ammo; stepsize 8.

### Próximos passos
1. Classes ESF ainda sem código à mão (SSJ/ataques restantes, itens, entidades) – ver `docs/ROADMAP.md`.
2. `client.dll` e `esf_bot.dll`.
3. Linkar e comparar com `hl.dll` / `hl_i386.so` (resolver todos os `[?]`).

## Estrutura
- `original/` – binários do mod usados na recuperação
- `symbols/` – nomes de classes/métodos/endereços extraídos dos binários
- `src/server/` – código recuperado do servidor (arquivos à mão + `sdk/`); `include/` – headers (classes ESF, campos do `CBasePlayer`)
- `decomp_raw/` – saída automática do angr (não compila; offsets `*(this+N)`), uma pasta por classe
- `tools/` – scripts (demangler do GCC 2.95, angr, `assemble_sdk.py`, `syntax_check.sh` = checagem de sintaxe contra o HL SDK + campos ESF, `sync_header.py`, `gen_extras.py`)
- `docs/` – achados e roadmap

Documentação: `docs/METODO.md` (pipeline), `docs/ROADMAP.md`, `docs/FINDINGS.md`, `docs/RECOVERED.md`.
Binários originais em `original/`.
