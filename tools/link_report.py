#!/usr/bin/env python3
"""Relatorio de ligacao/comparacao a partir dos .o gerados por tools/build_objects.sh.
uso: tools/link_report.py <pasta_dos_.o> <saida.md>

- duplicados: simbolo forte definido em mais de um .o (conflito de link)
- indefinidos: simbolos referenciados e nao definidos em nenhum .o (fora libc/libstdc++/engine)
- comparacao com o hl_i386.so: chave "Classe::metodo" (metodos) ou "nome" (funcoes livres), ignorando argumentos,
  usando symbols/classes_methods.txt e symbols/free_fns.txt (nomes originais GCC 2.95)."""
import re, subprocess, sys, glob, collections, os

odir, out = sys.argv[1], sys.argv[2]
objs = sorted(glob.glob(os.path.join(odir, '*.o')))

def nm(args, o):
    return subprocess.run(['nm'] + args + [o], capture_output=True, text=True).stdout.splitlines()

def demangle(names):
    if not names:
        return {}
    r = subprocess.run(['c++filt'], input='\n'.join(names), capture_output=True, text=True).stdout.splitlines()
    return dict(zip(names, r))

defined = collections.defaultdict(list)   # simbolo -> [objs] (fortes)
weak = set()
undef = collections.defaultdict(set)      # simbolo -> {objs}
for o in objs:
    for l in nm(['--defined-only'], o):
        p = l.split()
        if len(p) == 3:
            t, n = p[1], p[2]
            if t in 'TDB':
                defined[n].append(os.path.basename(o))
            elif t in 'WVwvu':
                weak.add(n)
    for l in nm(['-u'], o):
        p = l.split()
        if len(p) == 2:
            undef[p[1]].add(os.path.basename(o))

dups = {n: f for n, f in defined.items() if len(f) > 1}
und = {n: f for n, f in undef.items() if n not in defined and n not in weak}
# ignora o que vem de libc/libstdc++/libm e do motor
LIBPAT = re.compile(r'^(_ZSt|_ZNSt|_ZNKSt|_ZNSo|_ZdlPv|_Znwj|_Znaj|_ZdaPv|__cxa|__gxx|__stack_chk|_GLOBAL_OFFSET|__x86|__dso_handle|_Unwind|memcpy|memset|memmove|strlen|strcpy|strncpy|strcmp|strncmp|strcat|strchr|strrchr|strstr|sprintf|snprintf|vsnprintf|printf|fprintf|sscanf|fopen|fclose|fgets|fread|fwrite|fseek|ftell|fputs|fputc|fflush|atoi|atof|strtol|strtod|rand|srand|abs|fabs|sqrt|sin|cos|tan|atan|atan2|acos|asin|pow|floor|ceil|fmod|exp|log|malloc|free|calloc|realloc|toupper|tolower|isalpha|isdigit|isspace|isalnum|stat|time|exit|abort|qsort|getenv|__assert|__errno|_IO_|stdout|stderr|stdin|strcasecmp|strncasecmp|strdup|strtok|tmpnam|remove|rename|mkdir|opendir|readdir|closedir|memcmp|memchr|puts|putchar|getc|ungetc|setbuf|signal|longjmp|setjmp|_setjmp|_longjmp|clock|localtime|strftime|gettimeofday|usleep|sleep|ceilf|floorf|sqrtf|sinf|cosf|powf|fabsf|atan2f|roundf|truncf|fmodf|logf|expf|__isoc99|__fprintf_chk|__sprintf_chk|__snprintf_chk|__memcpy_chk|__strcpy_chk|__printf_chk)')
und_proj = {n: f for n, f in und.items() if not LIBPAT.match(n)}

# chaves das nossas definicoes
dm = demangle(list(defined))
def key_ours(d):
    d = re.sub(r'^(non-virtual thunk to |virtual thunk to )', '', d)
    d = re.sub(r'\(.*$', '', d)                  # tira argumentos (e const)
    d = re.sub(r'<[^<>]*>', '', d)
    d = d.split(' ')[-1] if ' ' in d else d
    return d
ours = set()
for n, d in dm.items():
    if n.startswith('_ZTV') or n.startswith('_ZTI') or n.startswith('_ZTS'):
        continue
    ours.add(key_ours(d))

# chaves originais
orig = {}
cls = None
for l in open('symbols/classes_methods.txt'):
    m = re.match(r'^(\w+)\s+\[', l)
    if m:
        cls = m.group(1); continue
    m = re.match(r'\s+[0-9a-f]+\s+(\d+)\s+(\S+)', l)
    if m and cls:
        orig[cls + '::' + m.group(2)] = int(m.group(1))
for l in open('symbols/free_fns.txt'):
    p = l.split()
    if len(p) < 3 or p[2].startswith('__'):
        continue
    n = re.split(r'__F', p[2])[0]
    orig[n] = int(p[1])

missing = {k: s for k, s in orig.items() if k not in ours}
extra = sorted(k for k in ours if k not in orig and not k.startswith('_'))

bycls = collections.Counter(k.split('::')[0] for k in missing if '::' in k)
with open(out, 'w') as f:
    f.write('# Relatorio de compilacao/ligacao (gerado por tools/link_report.py)\n\n')
    f.write(f'- objetos compilados: {len(objs)}\n- simbolos fortes definidos: {len(defined)}\n')
    f.write(f'- duplicados (conflito de link): {len(dups)}\n- indefinidos (fora libc/libstdc++): {len(und_proj)}\n')
    f.write(f'- funcoes/metodos do hl_i386.so: {len(orig)}; presentes por nome: {len(orig)-len(missing)}; ausentes: {len(missing)}\n')
    f.write(f'- definidos por nos e inexistentes no original (por nome): {len(extra)}\n\n')
    f.write('## Duplicados\n\n')
    for n, fl in sorted(dups.items())[:200]:
        f.write(f'- `{dm.get(n, n)}` em {", ".join(sorted(set(fl)))}\n')
    f.write('\n## Indefinidos (projeto)\n\n')
    ud = demangle(list(und_proj))
    for n, fl in sorted(und_proj.items(), key=lambda x: ud.get(x[0], x[0]))[:400]:
        f.write(f'- `{ud.get(n, n)}` <- {", ".join(sorted(fl)[:3])}\n')
    f.write('\n## Ausentes do original por classe (top 40)\n\n')
    for c, n in bycls.most_common(40):
        f.write(f'- {c}: {n}\n')
    f.write('\n## Ausentes (todos, Classe::metodo tamanho)\n\n')
    for k, s in sorted(missing.items()):
        f.write(f'- {k} {s}\n')
    f.write('\n## Definidos por nos mas sem correspondente por nome no original\n\n')
    for k in extra[:400]:
        f.write(f'- {k}\n')
print(f'objs={len(objs)} dup={len(dups)} indef={len(und_proj)} orig={len(orig)} ausentes={len(missing)} extras={len(extra)}')
