// botlog.h -- CLog (bot_log.txt) e CBaseOutput (buffer de texto para o console). RECUPERADO de decomp_raw/CLog, CBaseOutput.
#pragma once
class CBaseOutput                                   // saida em stream com buffer de 0x200 bytes; Display imprime via UTIL_Printf
{
public:
    char m_szText[0x200];                           // [OK] buffer (o vptr fica em +0x200 no binario; aqui o compilador decide)
    virtual void Display(void);                     // [OK] imprime e limpa o buffer
    virtual void CheckForThrowOut(char *szAdd);     // [OK] se nao cabe mais, imprime antes
    virtual void AddToTextString(const char *sz);   // [OK] concatena, imprimindo se estourar 512
    CBaseOutput &operator<<(const char *s);
    CBaseOutput &operator<<(char *s);
    CBaseOutput &operator<<(int i);
    CBaseOutput &operator<<(float f);
    CBaseOutput &operator<<(double d);
};
class CLog                                          // log em arquivo bot_log.txt (aberto no primeiro uso, modo "a")
{
public:
    char  m_fOpen;                                  // +0x1 [OK]
    FILE *m_pFile;                                  // +0x4 [OK]
    virtual void AddToTextString(const char *) {}   // [OK] vazio
    virtual void Display(void) {}                   // [OK] vazio
    void EndFrame(void);                            // [OK] fecha o arquivo
    CLog &operator<<(const char *s);
    CLog &operator<<(char *s);
    CLog &operator<<(unsigned long n);
    CLog &operator<<(char c);
    CLog &operator<<(int i);
    CLog &operator<<(float f);
    CLog &operator<<(double d);
private:
    void Open(void);
};
