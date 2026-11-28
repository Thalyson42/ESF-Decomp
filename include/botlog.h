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
// Saidas na tela (TE_TEXTMESSAGE para o host); objetos globais cout/lcout/rcout/mcout (static init 0x16d190) [OK]
class CScreenOutput : public CBaseOutput
{
public:
    CScreenOutput(short x, short y, short r, short g, short b, short ch) : m_sX(x), m_sY(y), m_sR(r), m_sG(g), m_sB(b), m_sChannel(ch) { m_szText[0] = 0; }
    virtual void Display(void);                     // [OK] manda o texto ao host (ou ao console se dedicado) e limpa
    virtual void AddToTextString(const char *sz);   // [OK] copia (corta em 0x1ff) e chama Display
    short m_sX, m_sY;                               // +0x204, +0x206 [OK] posicao (formato do TE_TEXTMESSAGE)
    short m_sR, m_sG, m_sB;                         // +0x208, +0x20a, +0x20c [OK] cor
    short m_sChannel;                               // +0x20e [OK]
};
class CLeftOutput : public CScreenOutput   { public: CLeftOutput()   : CScreenOutput(-7500, -5000, 255, 0, 0, 2) {} };     // lcout [OK]
class CRightOutput : public CScreenOutput  { public: CRightOutput()  : CScreenOutput(-450, -1, 0, 255, 0, 3) {} };        // rcout [OK]
class CMiddleOutput : public CScreenOutput { public: CMiddleOutput() : CScreenOutput(-3500, 300, 70, 70, 255, 4) {} };    // mcout [OK]
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
