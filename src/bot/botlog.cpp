// botlog.cpp -- CLog 11/11 e CBaseOutput 10/10 (funcoes _GLOBAL_ de init/dtor de estaticos nao entram). RECUPERADO de decomp_raw.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "botlog.h"

extern void UTIL_Printf(const char *szMsg, int iA, int iB);              // [?] funcao livre do ESF (args 1,0)
extern void BuildBotFileName(char *szOut, const char *szDir, const char *szFile); // [?]

// ----- CBaseOutput -----
void CBaseOutput::Display(void)
{
    if (!strcmp(m_szText, ""))                      // [OK] nada a imprimir (compara com string vazia em 0x5aeddc)
        return;
    char szBuf[128];
    memset(szBuf, 0, 127);
    if (strlen(m_szText) <= 126) strcpy(szBuf, m_szText);
    else { strncpy(szBuf, m_szText, 127); szBuf[127] = 0; }   // [OK] corta em 127
    UTIL_Printf(szBuf, 1, 0);
    m_szText[0] = 0;
}

void CBaseOutput::CheckForThrowOut(char *szAdd)
{
    if (strlen(m_szText) + strlen(szAdd) > 0x1ff)   // [OK] nao cabe: descarrega o buffer
        Display();
}

void CBaseOutput::AddToTextString(const char *sz)
{
    if (strlen(sz) <= 0x1ff) { strncpy(m_szText, sz, 0x200); m_szText[0x200 - 1] = 0; }   // [?] o binario zera so m_szText[0x1ff]
    else strcpy(m_szText, sz);
    Display();                                      // [OK] vtable +0xc
}

CBaseOutput &CBaseOutput::operator<<(const char *s) { AddToTextString(s); return *this; }
CBaseOutput &CBaseOutput::operator<<(char *s)       { AddToTextString(s); return *this; }
CBaseOutput &CBaseOutput::operator<<(int i)    { char b[32]; memset(b, 0, 24); sprintf(b, "%d", i); AddToTextString(b); return *this; }
CBaseOutput &CBaseOutput::operator<<(float f)  { char b[32]; memset(b, 0, 24); sprintf(b, "%f", f); AddToTextString(b); return *this; }
CBaseOutput &CBaseOutput::operator<<(double d) { char b[32]; memset(b, 0, 24); sprintf(b, "%f", d); AddToTextString(b); return *this; }

// ----- CLog -----
void CLog::Open(void)
{
    if (m_fOpen) return;
    m_fOpen = 1;
    char szPath[256];
    memset(szPath, 0, 0xff);
    BuildBotFileName(szPath, "bot_log.txt", 0);
    m_pFile = fopen(szPath, "a");
    fprintf(m_pFile, "\n----------------------------------------------------------\n\n");   // [OK] separador de sessao
}

#define CLOG_OP(type, fmt, expr) CLog &CLog::operator<<(type v) { Open(); if (m_pFile) { fprintf(m_pFile, fmt, expr); fflush(m_pFile); } return *this; }
CLog &CLog::operator<<(const char *s) { Open(); if (m_pFile) { fprintf(m_pFile, s); fflush(m_pFile); } return *this; }   // [OK] usa o texto como formato
CLOG_OP(char *, "%s", v)
CLOG_OP(unsigned long, "%i", (int)v)
CLOG_OP(char, "%c", v)
CLOG_OP(int, "%i", v)
CLOG_OP(float, "%f", v)
CLOG_OP(double, "%f", v)

void CLog::EndFrame(void)
{
    if (m_pFile) fclose(m_pFile);                   // [OK]
    m_fOpen = 0;
}
