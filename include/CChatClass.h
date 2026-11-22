// CChatClass -- conversa dos bots (objeto global ChatClass). Estruturas conferidas no binario (hl_i386.so):
//   lista ligada: cabecalho {head,tail} (8 bytes); elo {data,next,prev} (12 bytes)
//   CChatSentence 44 bytes; CChatNode 20 bytes; TMultiChoice<T> {total, lista de CChoice{lo,hi,valor}}.
#pragma once

struct bot_personality_s;      // 60 bytes por personalidade; percentuais como short (ver CBotManager)
class CBot;
class CBasePlayer;

template <class T> struct TLink { T data; TLink *next; TLink *prev; };
template <class T> struct TList {
    TLink<T> *head;
    TLink<T> *tail;
    TList() : head(0), tail(0) {}
    void Append(T item);           // [OK] igual ao codigo inlined no binario
    T PopFront(void);              // remove o primeiro elo e devolve o dado
    void ClearLinks(void);         // apaga so os elos (nao os dados)
};
template <class T> void TList<T>::Append(T item)
{
    TLink<T> *l = new TLink<T>;
    l->next = 0; l->prev = 0; l->data = 0;
    if (!head) { head = l; l->data = item; l->next = 0; l->prev = 0; tail = head; }
    else { tail->next = l; l->prev = tail; tail = l; l->data = item; l->next = 0; }
}
template <class T> T TList<T>::PopFront(void)
{
    TLink<T> *l = head; T d = l->data;
    if (l == tail) tail = l->next;
    head = l->next;
    if (head) head->prev = 0;
    l->next = 0;
    delete l;
    return d;
}
template <class T> void TList<T>::ClearLinks(void)
{
    TLink<T> *l = head;
    while (l) { TLink<T> *n = l->next; l->next = 0; l->prev = 0; delete l; l = n; }
    tail = 0; head = 0;
}

template <class T> struct TChoice { int lo; int hi; T value; };            // [lo, hi)
template <class T> struct TMultiChoice {
    int iTotal;                    // +0 soma dos pesos
    TList<TChoice<T> *> *pChoices; // +4
};

class CChatClass {
public:
    enum EKeyType { KEY_WORD = 0, KEY_WORD2 = 1, KEY_TOKEN = 2, KEY_DEFAULT = 3 };

    struct CChatSentence {                // 44 bytes
        char szName[36];                  // +0  nome do alvo/autor (usado em List2)
        char *pszText;                    // +0x24
        bool bCanModify;                  // +0x28 (falso se a frase comeca com '!')
        unsigned char ucPercent;          // +0x29 peso (UV:n, padrao 50)
        unsigned char ucNumRandom;        // +0x2a quantidade de "%r"
        unsigned char ucNumName;          // +0x2b quantidade de "%n"
        CChatSentence(const char *szText, bool bModify, unsigned char ucPct, unsigned char ucR, unsigned char ucN);
        ~CChatSentence();
    };
    struct CChatNode {                    // 20 bytes
        TList<CChatSentence *> *pSentences;   // +0
        char *pszKey;                          // +4 palavra-chave (ou 1 caractere no tipo TOKEN)
        int iType;                             // +8 EKeyType
        int iTotalPercent;                     // +0xc soma dos pesos
        int iNumSentences;                     // +0x10
        CChatNode(const char *szKey, EKeyType eType);
        ~CChatNode();
        CChatNode *AddSentence(const char *szSentence);
        int GetRegularVal(void);
    };
    struct SOldChatText {                 // 168 bytes
        char szSender[33];                // +0
        char szText[131];                 // +0x21
        float fTime;                      // +0xa4
    };

    SOldChatText m_PrevMsg[5];            // +0 [OK] 5 * 168 = 840; [0] = mais recente
    CChatNode *m_pWelcomeNode;            // +0x348 (iType == KEY_DEFAULT)
    TList<CChatNode *> *m_pNormalNodes;   // +0x34c
    TList<CChatNode *> *m_pTauntNodes;    // +0x350
    TList<CChatNode *> *m_pWhineNodes;    // +0x354
    CChatSentence *m_pRecentNormal[5];    // +0x358 ultimas frases normais usadas [OK]
    CChatSentence *m_pRecentWhine[5];     // +0x36c
    CChatSentence *m_pRecentTaunt[5];     // +0x380  (tamanho total 0x394)

    CChatClass();
    ~CChatClass();

    // arquivo de frases
    void ReadChatFile(void);
    void AddNormalChatSentence(const char *szSentence, const char *szKey, EKeyType eType);
    void AddTauntChatSentence(const char *szSentence, const char *szKey, EKeyType eType);
    void AddWhineChatSentence(const char *szSentence, const char *szKey, EKeyType eType);
    // depuracao
    void LogChatLists(void);
    void LogChatNode(CChatNode *pNode);
    void LogChatSentences(CChatSentence *pSentence);
    void LogPrevMessages(void);
    void PrintChatSentences(void);
    void PrintChatNode(CChatNode *pNode);
    void PrintChatSentence(CChatSentence *pSentence);
    // busca
    char KeyWordIsInNodeList(CChatNode *pNode, const char *szKey);
    char KeyTokenIsInNodeList(CChatNode *pNode, char cKey);
    // texto
    void CutSpaces(const char *szIn, char *szOut);
    int CutTags(const char *szIn, char *szOut);
    void DropChars(const char *szIn, char *szOut);
    void SwapChars(const char *szIn, char *szOut);
    void HumanizeName(bot_personality_s *pPers, const char *szIn, char *szOut);
    void MakeChatSentence(bot_personality_s *pPers, const char *szIn, char *szOut);
    char *FillInNames(CBot *pBot, const char *szIn, char *szOut, char *szName, char *szAvoid);
    void GetChatTextFromTextMsg(const char *szMsg, char *szOut);
    void GetSenderNameFromTextMsg(const char *szMsg, char *szOut);
    void StoreChatMsg(edict_t *pEdict, const char *szText);
    // escolha de frases
    void StoreRecentUsedSentence(CChatSentence **ppList, CChatSentence *pSentence);
    void MakeSentenceChoiceList(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM, CChatSentence **ppRecent);
    void MakeSentenceChoiceList2(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM, CChatSentence **ppRecent, const char *szName);
    void MakeSentenceChoiceList3(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM);
    char CreateResponseList(SOldChatText *pOld, TMultiChoice<CChatSentence *> *pM);
    // fala dos bots
    void LetBotSayAWelcomeSentence(CBot *pBot);
    void LetBotSaySomething(CBot *pBot);
    void LetBotCheckForReply(CBot *pBot);
    void LetBotTaunt(CBot *pBot, CBasePlayer *pVictim);
    void LetBotWhine(CBot *pBot, CBasePlayer *pAttacker);
};
