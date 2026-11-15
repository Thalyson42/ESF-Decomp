# Funções recuperadas à mão

| Classe | Arquivo | Funções | Observação |
|---|---|---|---|
| CKamehameha | src/server/kamehameha.cpp | 11/11 | Marcadores [OK]/[?] no código. Depende de CControlledBeam e de nomes de campos ainda `f_XXX`. |

`tools/data/entvars_offsets.txt` = offsets de `entvars_t` (calculados do SDK) para traduzir `*(pev+N)`.
Descoberto: CKamehameha e CGallitGun::Spawn gravam os mesmos campos da classe-base (+0xdc..+0x1fc).
