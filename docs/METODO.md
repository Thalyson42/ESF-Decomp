# Método e armadilhas técnicas

## Binários de origem (`original/`)
- `original/linuxdlls/hl_i386.so` – servidor Linux, **com símbolos**, GCC 2.95 (fonte principal da recuperação).
- `original/dlls/hl.dll` – servidor Windows (MSVC), 339 exports com nomes C++. Usado para conferir o comportamento.
- `original/cl_dlls/client.dll` – cliente (HUD/VGUI). `original/cl_dlls/fmod.dll` – áudio FMOD (terceiros).
- `original/esf_bot/esf_bot.dll` – bot (ESF Bot 4.0, aparentemente de outro autor).
- `original/fmod_installer.dll` – outra cópia do FMOD (UPX), vinda do instalador.
- Strings internas dizem "ESF Beta 1.2.1, Public Version" (o mod distribuído é a 1.2.3).

## Pipeline (reproduzível)
1. `tools/demangle_gcc2.py` – c++filt moderno NÃO demangla GCC 2.95 (`Nome__<len>Classe...`).
2. `tools/batch_decompile.py <so> <saida> '.' 2` – angr 10.x. Armadilhas:
   - endereços do .so no angr têm base **0x400000** (somar `mapped_base`);
   - `signal.alarm` precisa lançar `BaseException` (angr engole `Exception`); limite 30 s/função;
   - 3.942 funções ≈ 25 min com 2 núcleos; é retomável (pula arquivos já gerados);
   - processos em background não sobrevivem ao fim da execução: rodar em primeiro plano, em partes.
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

## Nomes de campos: save-tables (`tools/extract_savefields.py`)
As tabelas `TYPEDESCRIPTION` (macro `DEFINE_FIELD`) ficam no .so como `_<len>Classe.m_SaveData` / `m_playerSaveData`.
Cada entrada (16 bytes: tipo, ponteiro p/ nome, offset, tamanho) dá **nome, tipo e offset exatos** de um campo salvo.
Saída em `symbols/save_fields.txt|json` (53 classes, 299 campos) e usada por `recover_classes.py` nos headers.
Só cobre campos salvos; o resto continua `f_XXX`. Os offsets de herança (ex.: m_pPlayer=+0x80) são absolutos.
