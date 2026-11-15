# Método e armadilhas (para retomar o trabalho em qualquer sessão)

## Insumos (NÃO estão neste repositório; o dono os tem)
- `esf.zip` (pasta do mod, 130 arquivos): `linuxdlls/hl_i386.so` (2,5 MB, **com símbolos**, GCC 2.95), `dlls/hl.dll`, `cl_dlls/client.dll`, `esf_bot/esf_bot.dll`.
- Assets (overviews, media, models, sound, gfx, maps, textures): sem código; maps `.bsp` servem para testar entidades.
- `esfdll.dll` = helper do instalador; `fmod.dll` = áudio de terceiros. Ambos fora do escopo.
- Pasta `mp3` não foi enviada.
- Versão alegada pelo dono: 1.2.3. Strings dos binários dizem "ESF Beta 1.2.1".

## Pipeline (reproduzível)
1. `tools/demangle_gcc2.py` – c++filt moderno NÃO demangla GCC 2.95 (`Nome__<len>Classe...`).
2. `tools/batch_decompile.py <so> <saida> '.' 2` – angr 10.x. Armadilhas:
   - endereços do .so no angr têm base **0x400000** (somar `mapped_base`);
   - `signal.alarm` precisa lançar `BaseException` (angr engole `Exception`); limite 30 s/função;
   - 3.942 funções ≈ 25 min com 2 núcleos; é retomável (pula arquivos já gerados);
   - processos em background morrem quando a sessão acaba: rodar em primeiro plano em partes.
3. `tools/sdk_match.py` – compara com o HL SDK (`github.com/ValveSoftware/halflife`) -> `docs/sdk_match.csv`.
4. `tools/recover_classes.py` (usar `HLSDK=<pasta do sdk>`) – headers `src/headers/*.h`:
   - vtable via **relocações** (`readelf -r`), não via bytes do arquivo (vêm zerados);
   - slot 0 da vtable gcc2.95 = 3ª entrada (pular delta e typeinfo);
   - base de classe: SDK quando existe, senão heurística (pode errar).
5. Tradução manual: ver `docs/RECOVERED.md` e os marcadores `[OK]` / `[?]` no código.

## Convenções
- `[OK]` = confirmado contra o decompilado e/ou o SDK; `[?]` = nome/constante sem confirmação.
- `*(pev+N)` -> use `tools/data/entvars_offsets.txt`.
- No decompilado do angr, `a0->field_0` costuma ser `pev`; o vptr do gcc2.95 fica em `this+0x60` (chamada virtual `(*(vptr+12))(this)` = slot 1 = `Precache`).

## Achados registrados
- CKamehameha e CGallitGun::Spawn gravam os mesmos campos da base (+0xdc..+0x1fc).
- 1.020 funções têm equivalente no SDK; 864 prováveis iguais; 29 modificadas (CBasePlayer::PreThink/Killed/TakeDamage...).

## Próximos passos (fila)
1. CControlledBeam + CGallitGun (destravam CKamehameha e armas de feixe).
2. CPlayerMelee (201 métodos), CBasePlayer.
3. Montar .cpp das 864 funções "iguais ao SDK".
4. Personagens (CGoku, CSSJGoku, CFrieza, ...), ataques.
5. client.dll e esf_bot.dll.
6. Compilar (GitHub Actions) e comparar com hl.dll.
