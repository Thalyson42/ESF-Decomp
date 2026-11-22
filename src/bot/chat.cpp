// CChatClass -- conversa dos bots. RECUPERADO de decomp_raw/CChatClass (+ funcoes livres dos tipos aninhados).
// [OK] = conferido no assembly; [?] = adivinhado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "bot.h"
#include "CBotManager.h"
#include "CChatClass.h"
#include <iostream>
#include <ctype.h>

extern CBotManager BotManager;
extern BOOL UTIL_IsValidPlayer(CBaseEntity *pEnt, short a, short b);
extern CBaseEntity *UTIL_PlayerByIndex(int iIndex);

// ---------------------------------------------------------------- tipos aninhados
CChatClass::CChatSentence::CChatSentence(const char *szText, bool bModify, unsigned char ucPct, unsigned char ucR, unsigned char ucN)
{
    pszText = new char[strlen(szText) + 1];
    bCanModify = bModify;
    ucPercent = ucPct;
    ucNumRandom = ucR;
    ucNumName = ucN;
    strcpy(pszText, szText);
    szName[0] = 0;
}

CChatClass::CChatSentence::~CChatSentence()
{
    if (pszText)
    {
        delete[] pszText;
        pszText = 0;
    }
}

CChatClass::CChatNode::CChatNode(const char *szKey, EKeyType eType)
{
    pSentences = new TList<CChatSentence *>;
    pszKey = 0;
    iType = eType;
    iTotalPercent = 0;
    iNumSentences = 0;
    if (eType == KEY_TOKEN)
    {
        pszKey = new char[2];
        pszKey[0] = szKey[0];
        pszKey[1] = 0;
        return;
    }
    pszKey = new char[strlen(szKey) + 1];
    strcpy(pszKey, szKey);
}

CChatClass::CChatNode::~CChatNode()
{
    if (pszKey && *pszKey)                       // [OK] o binario testa o primeiro caractere
    {
        delete[] pszKey;
        pszKey = 0;
    }
    if (pSentences)
    {
        while (pSentences->head)
        {
            CChatSentence *pS = pSentences->PopFront();
            delete pS;
        }
        pSentences->ClearLinks();
        delete pSentences;
        pSentences = 0;
    }
}

int CChatClass::CChatNode::GetRegularVal(void)
{
    if (iTotalPercent && iNumSentences)
        return iTotalPercent / iNumSentences;
    return 0;
}

// Adiciona uma frase ao no. Prefixos aceitos: '!' (nao modificar), "UV:<n>" (peso 0..100, padrao 50).
// Conta "%r" (jogador aleatorio) e "%n" (nome) na frase.
CChatClass::CChatNode *CChatClass::CChatNode::AddSentence(const char *szSentence)
{
    short iter = 0;
    unsigned char ucR = 0, ucN = 0;
    int iWeight = 50;
    bool bModify = true;
    short sLen = (short)strlen(szSentence);

    if (iter < sLen && *szSentence)
    {
        do
        {
            char c = szSentence[iter];
            if (c != ' ' && c != '\t')
            {
                if (c == '!')
                    bModify = false;
                else
                {
                    if (strncasecmp(&szSentence[iter], "UV:", 3))
                        break;
                    iter += 3;
                    short j = iter;
                    if (j < sLen && j <= 0x4f)
                    {
                        if (szSentence[j] && (szSentence[j] == ' ' || szSentence[j] == '\t'))
                        {
                            while (1)
                            {
                                j++;
                                if (j >= sLen || j > 0x4f || !szSentence[j])
                                    break;
                                if (szSentence[j] == ' ')
                                    continue;
                                if (szSentence[j] != '\t')
                                    break;
                            }
                        }
                    }
                    if (szSentence + j && szSentence[j])
                    {
                        char szBuf[80];
                        memset(szBuf, 0, sizeof(szBuf));
                        strcpy(szBuf, szSentence);
                        char *pTok = strtok(szBuf + j, " ");
                        if (pTok && *pTok)
                        {
                            iWeight = strtol(pTok, 0, 10);
                            iter = (short)(j + strlen(pTok));
                            continue;                    // [OK] vai direto para a condicao do laco
                        }
                    }
                }
            }
            iter++;
        } while (iter < sLen && iter <= 79 && szSentence[iter]);
    }

    sLen = (short)strlen(szSentence);
    for (char i = 0; (short)(sLen - 1) > 0 && i < (unsigned short)sLen - 1; i++)
    {
        if (szSentence[(int)i] == '%')
        {
            if (szSentence[i + 1] == 'r')
                ucR++;
            else if (szSentence[i + 1] == 'n')
                ucN++;
        }
    }
    if (iWeight > 100)
        iWeight = 100;
    else if (iWeight < 0)
        iWeight = 0;

    CChatSentence *pS = new CChatSentence(&szSentence[iter], bModify, (unsigned char)iWeight, ucR, ucN);
    pSentences->Append(pS);
    iNumSentences++;
    iTotalPercent += iWeight;
    return this;
}

// ---------------------------------------------------------------- construtor / destrutor
CChatClass::CChatClass()
{
    m_pWelcomeNode = new CChatNode("", KEY_DEFAULT);          // [OK] tipo 3, lista vazia
    m_pNormalNodes = new TList<CChatNode *>;
    m_pTauntNodes = new TList<CChatNode *>;
    m_pWhineNodes = new TList<CChatNode *>;
    memset(m_PrevMsg, 0, sizeof(m_PrevMsg));
    // [?] o binario ainda percorre 5 posicoes zerando vetores locais (codigo sem efeito no decompilado)
}

static void DeleteNodeList(TList<CChatClass::CChatNode *> *&pList)
{
    if (!pList)
        return;
    while (pList->head)
    {
        CChatClass::CChatNode *pNode = pList->PopFront();
        if (pNode)
            delete pNode;
    }
    pList->ClearLinks();
    delete pList;
    pList = 0;
}

CChatClass::~CChatClass()
{
    if (m_pWelcomeNode)
    {
        delete m_pWelcomeNode;
        m_pWelcomeNode = 0;
    }
    DeleteNodeList(m_pNormalNodes);
    DeleteNodeList(m_pTauntNodes);
    DeleteNodeList(m_pWhineNodes);
}

// ---------------------------------------------------------------- busca de nos
char CChatClass::KeyWordIsInNodeList(CChatNode *pNode, const char *szKey)
{
    if (pNode->iType != KEY_TOKEN && szKey && *szKey)
        return !strcasecmp(szKey, pNode->pszKey);
    return 0;
}

char CChatClass::KeyTokenIsInNodeList(CChatNode *pNode, char cKey)
{
    if (pNode->iType == KEY_TOKEN)
        return cKey == *pNode->pszKey;
    return 0;
}

static void AddSentenceToList(CChatClass *pThis, TList<CChatClass::CChatNode *> *pList, const char *szSentence, const char *szKey,
                              CChatClass::EKeyType eType, bool bToken)
{
    CChatClass::CChatNode *pFound = 0;
    TLink<CChatClass::CChatNode *> *pLink = pList->head;
    while (pLink)
    {
        TLink<CChatClass::CChatNode *> *pNext = pLink->next;
        if (bToken ? pThis->KeyTokenIsInNodeList(pLink->data, *szKey) : pThis->KeyWordIsInNodeList(pLink->data, szKey))
        {
            pFound = pLink->data;
            break;
        }
        pLink = pNext;
    }
    if (pFound)
    {
        pFound->AddSentence(szSentence);
        return;
    }
    CChatClass::CChatNode *pNode = new CChatClass::CChatNode(szKey, eType);
    pNode->AddSentence(szSentence);
    pList->Append(pNode);
}

void CChatClass::AddNormalChatSentence(const char *szSentence, const char *szKey, EKeyType eType)
{
    AddSentenceToList(this, m_pNormalNodes, szSentence, szKey, eType, eType == KEY_TOKEN);   // [OK] so a lista normal aceita token
}

void CChatClass::AddTauntChatSentence(const char *szSentence, const char *szKey, EKeyType eType)
{
    AddSentenceToList(this, m_pTauntNodes, szSentence, szKey, eType, false);
}

void CChatClass::AddWhineChatSentence(const char *szSentence, const char *szKey, EKeyType eType)
{
    AddSentenceToList(this, m_pWhineNodes, szSentence, szKey, eType, false);
}

// ---------------------------------------------------------------- depuracao
void CChatClass::LogChatLists(void) {}                       // [OK] corpo vazio no binario
void CChatClass::LogChatNode(CChatNode *pNode) {}            // [OK]
void CChatClass::LogChatSentences(CChatSentence *pSentence) {}   // [OK]
void CChatClass::LogPrevMessages(void)                       // [OK] so o laco 0..4, sem efeito
{
    for (int i = 0; i <= 4; i++)
        ;
}

void CChatClass::PrintChatSentence(CChatSentence *pSentence)
{
    char szNum[25];
    std::cout << "Sentence: ";
    std::cout << pSentence->pszText;
    std::cout << " CanModify: ";
    sprintf(szNum, "%d", pSentence->bCanModify);
    std::cout << szNum;
    std::cout << " UV: ";
    sprintf(szNum, "%d", pSentence->ucPercent);
    std::cout << szNum;
    std::cout << "\n";
}

void CChatClass::PrintChatNode(CChatNode *pNode)
{
    if (pNode->iType == KEY_WORD)
    {
        std::cout << "Node using keyword: ";
        std::cout << pNode->pszKey;
        std::cout << "\n";
    }
    else if (pNode->iType == KEY_WORD2)
    {
        std::cout << "Node using keyword2: ";
        std::cout << pNode->pszKey;
        std::cout << "\n";
    }
    else
    {
        char szNum[25];
        std::cout << "Node using key token: ";
        memset(szNum, 0, sizeof(szNum));
        sprintf(szNum, "%d", *pNode->pszKey);
        std::cout << szNum;
        std::cout << "\n";
    }
    std::cout << "Sentences of this node: \n\n";
    for (TLink<CChatSentence *> *l = pNode->pSentences->head; l; l = l->next)
        PrintChatSentence(l->data);
    std::cout << "\nEnd node\n";
}

void CChatClass::PrintChatSentences(void)
{
    std::cout << "Welecome sentences:\n\n";                   // [OK] erro de digitacao do original
    for (TLink<CChatSentence *> *l = m_pWelcomeNode->pSentences->head; l; l = l->next)
        PrintChatSentence(l->data);
    std::cout << "\n\nNormal sentences\n\n";
    for (TLink<CChatNode *> *l = m_pNormalNodes->head; l; l = l->next)
        PrintChatNode(l->data);
    std::cout << "\n\nTaunt sentences\n\n";
    for (TLink<CChatNode *> *l = m_pTauntNodes->head; l; l = l->next)
        PrintChatNode(l->data);
    std::cout << "\n\nWhine sentences\n\n";
    for (TLink<CChatNode *> *l = m_pWhineNodes->head; l; l = l->next)
        PrintChatNode(l->data);
}

// ---------------------------------------------------------------- texto
void CChatClass::CutSpaces(const char *szIn, char *szOut)
{
    int i = 0;
    if (*szIn == ' ')
    {
        do
            i++;
        while (i <= 79 && szIn[i] == ' ');
    }
    char *p = szOut;
    for (; i <= 79 && szIn[i]; i++)
        *p++ = szIn[i];
    *p = 0;
    for (int j = (int)strlen(szOut) - 1; j > 0; j--)
    {
        if (szOut[j] != ' ')
            return;
        szOut[j] = 0;
    }
}

static const char *g_szTag1[22] = { "-=", "-[", "-]", "-}", "-{", "<[", "<]", "[-", "]-", "{-", "}-", "[[", "[", "{", "]", "}", "<", ">", "-", "|", "=", "+" };
static const char *g_szTag2[22] = { "=-", "]-", "[-", "{-", "}-", "]>", "[>", "-]", "-[", "-}", "-{", "]]", "]", "}", "[", "{", ">", "<", "-", "|", "=", "+" };

// Remove as "tags" decorativas de nomes ([xx]nome, -=nome=-, ...). Devolve 1 se algo foi cortado.
int CChatClass::CutTags(const char *szIn, char *szOut)
{
    char szBuf[32];
    int iCut = 0;

    strncpy(szBuf, szIn, 31);
    szBuf[31] = 0;
    for (int i = 0; i <= 21; i++)
    {
        char *p = strstr(szBuf, g_szTag1[i]);
        char *q = p ? strstr(p + strlen(g_szTag1[i]), g_szTag2[i]) : NULL;
        if (p && q && p < q)
        {
            char *src = q + strlen(g_szTag2[i]);            // remove da tag de abertura ate o fim da tag de fechamento
            char *dst = p;
            while (*src)
                *dst++ = *src++;
            *dst = *src;
            iCut = 1;
        }
    }
    strcpy(szOut, szBuf);
    CutSpaces(szOut, szBuf);
    if (strlen(szBuf) == 0)
    {
        // nada sobrou: refaz tirando so os simbolos das tags
        strncpy(szBuf, szIn, 31);
        szBuf[31] = 0;
        for (int i = 0; i <= 21; i++)
        {
            char *p = strstr(szBuf, g_szTag1[i]);
            char *q = p ? strstr(p + strlen(g_szTag1[i]), g_szTag2[i]) : NULL;
            if (p && q && p < q)
            {
                char *src = p + strlen(g_szTag1[i]);
                char *dst = p;
                while (*src)
                    *dst++ = *src++;
                *dst = *src;
                q[-(int)strlen(g_szTag2[i])] = 0;           // [?] indice relativo ao ponteiro antigo (como no binario)
            }
        }
    }
    CutSpaces(szBuf, szOut);
    szOut[31] = 0;
    return iCut;
}

void CChatClass::DropChars(const char *szIn, char *szOut)
{
    int iTries = 0;
    strcpy(szOut, szIn);
    int iLen = (int)strlen(szOut);
    int r = RANDOM_LONG(1, iLen - 1);
    bool bBad = !isalpha(szOut[r]) || szOut[r - 1] == '%';
    if (bBad)
    {
        if (iTries > 19)
            return;
        do
        {
            r = RANDOM_LONG(1, iLen - 1);
            bBad = !isalpha(szOut[r]) || szOut[r - 1] == '%';
        } while (iTries++, bBad && iTries <= 19);
    }
    if (iTries > 19)
        return;
    char *src = &szOut[r + 1];
    char *dst = &szOut[r];
    while (*src)
        *dst++ = *src++;
    *dst = *src;
}

void CChatClass::SwapChars(const char *szIn, char *szOut)
{
    int iTries = 0;
    strcpy(szOut, szIn);
    int iLen1 = (int)strlen(szOut) + 1;
    int r = RANDOM_LONG(1, iLen1 - 3);
    bool bBad = !isalpha(szOut[r]) || !isalpha(szOut[r + 1]) || szOut[r - 1] == '%';
    if (bBad)
    {
        if (iTries > 19)
            return;
        do
        {
            r = RANDOM_LONG(1, iLen1 - 3);
            bBad = !isalpha(szOut[r]) || !isalpha(szOut[r + 1]) || szOut[r - 1] == '%';
        } while (iTries++, bBad && iTries <= 19);
    }
    if (iTries > 19)
        return;
    char c = szOut[r];
    szOut[r] = szOut[r + 1];
    szOut[r + 1] = c;
}

// percentuais da personalidade (short): [15] cortar tags, [16] omitir letras, [17] trocar letras, [18] minusculas
#define PERS(p, i) (((short *)(p))[i])

void CChatClass::HumanizeName(bot_personality_s *pPers, const char *szIn, char *szOut)
{
    char szBuf[32];
    memset(szBuf, 0, sizeof(szBuf));
    if (RANDOM_LONG(1, 100) <= PERS(pPers, 15))
    {
        strncpy(szBuf, szIn, 31);
        while (CutTags(szBuf, szOut))
            strcpy(szBuf, szOut);
    }
    else
    {
        strncpy(szOut, szIn, 31);
        szOut[31] = 0;
    }
    if (RANDOM_LONG(1, 100) > PERS(pPers, 18))
        return;
    int i = 0;
    if (!szOut[0])
        return;
    while (1)
    {
        szOut[i] = tolower(szOut[i]);
        i++;
        if (i > 79 || !szOut[i])
            return;
    }
}

void CChatClass::MakeChatSentence(bot_personality_s *pPers, const char *szIn, char *szOut)
{
    char szBuf[80];
    memset(szBuf, 0, sizeof(szBuf));
    strncpy(szBuf, szIn, 79);
    if (RANDOM_LONG(1, 100) <= PERS(pPers, 16))
    {
        for (int i = RANDOM_LONG(1, 3); i; i--)
        {
            DropChars(szBuf, szOut);
            strcpy(szBuf, szOut);
        }
    }
    if (RANDOM_LONG(1, 100) <= PERS(pPers, 17))
    {
        for (int j = RANDOM_LONG(1, 2); j; j--)
        {
            SwapChars(szBuf, szOut);
            strcpy(szBuf, szOut);
        }
    }
    if (RANDOM_LONG(1, 100) <= PERS(pPers, 18))
    {
        for (int k = 0; szBuf[k]; k++)
            szBuf[k] = tolower(szBuf[k]);
    }
    strcpy(szOut, szBuf);
}

// Substitui "%n" por szName e "%r" pelo nome (humanizado) de outro jogador, evitando szName e szAvoid.
char *CChatClass::FillInNames(CBot *pBot, const char *szIn, char *szOut, char *szName, char *szAvoid)
{
    int iSrc = 0, iDst = 0;
    char szNames[32][33];
    char szHuman[32];
    szOut[0] = 0;

    char *pN = strstr((char *)szIn, "%n");
    while (1)
    {
        char *pR = strstr((char *)szIn + iSrc, "%r");
        if (!pN && !pR)
            break;
        int iNPos = pN ? (int)(pN - szIn) : 0;
        if (!pR || (pN && iNPos < (int)(pR - szIn)))
        {
            for (; szIn + iSrc < pN; iDst++)
                szOut[iDst] = szIn[iSrc++];
            szOut[iDst] = 0;
            iSrc += 2;
            strcat(szOut, szName);
            iDst += (int)strlen(szName);
        }
        else
        {
            int iCount = 0;
            for (int i = 1; i <= gpGlobals->maxClients; i++)
            {
                CBaseEntity *pPl = UTIL_PlayerByIndex(i);
                if ((CBaseEntity *)pPl == (CBaseEntity *)pBot)
                    continue;
                if (!BOTF(pBot, int, 0xa20))
                {
                    if (!UTIL_IsValidPlayer(pPl, 0, 0))
                        continue;
                }
                else if (!(BOTF(pBot, unsigned int, 0xaa8) & (1 << ((i - 1) & 31))))
                    continue;
                strcpy(szNames[iCount], STRING(pPl->pev->netname));
                iCount++;
            }
            if (iCount <= 1)
                return szOut;
            int r = RANDOM_LONG(0, iCount - 1);
            bool bBad = !strcmp(szNames[r], szName) || !strcmp(szNames[r], szAvoid);
            int iTries = 0;
            if (bBad)
            {
                do
                {
                    r = RANDOM_LONG(0, iCount - 1);
                    bBad = !strcmp(szNames[r], szName) || !strcmp(szNames[r], szAvoid);
                } while (iTries++, bBad && iTries <= 19);
            }
            HumanizeName(BOTF(pBot, bot_personality_s *, 0xa04), szNames[r], szHuman);
            for (; szIn + iSrc < pR; iDst++)
                szOut[iDst] = szIn[iSrc++];
            szOut[iDst] = 0;
            iSrc += 2;
            strcat(szOut, szHuman);
            iDst += (int)strlen(szHuman);
        }
        szOut[iDst] = 0;
        pN = strstr((char *)szIn + iSrc, "%n");
    }
    if (szIn[iSrc])
    {
        do
            szOut[iDst++] = szIn[iSrc++];
        while (szIn[iSrc]);
    }
    szOut[iDst] = 0;
    return szOut;
}

void CChatClass::GetChatTextFromTextMsg(const char *szMsg, char *szOut)
{
    if (szMsg && *szMsg && *szMsg == 2)
    {
        char szBuf[256];
        memset(szBuf, 0, sizeof(szBuf));
        strcpy(szBuf, szMsg + 1);
        int iLen = (int)strlen(szBuf);
        int i = 0;
        if (iLen != 0 && szBuf[0] && szBuf[0] != ':')
        {
            do
                i++;
            while (i < (int)strlen(szBuf) && szBuf[i] && szBuf[i] != ':');
        }
        strcpy(szOut, &szBuf[2 + i]);
        return;
    }
    *szOut = 0;
}

void CChatClass::GetSenderNameFromTextMsg(const char *szMsg, char *szOut)
{
    if (szMsg && *szMsg)
    {
        if (*szMsg == 2)
        {
            char szBuf[256];
            memset(szBuf, 0, sizeof(szBuf));
            strcpy(szBuf, szMsg + 1);
            int iLen = (int)strlen(szBuf);
            int i = 0;
            if (i < iLen && szBuf[0] && szBuf[0] != ':')
            {
                do
                    i++;
                while (i < iLen && szBuf[i] && szBuf[i] != ':' && i <= 31);
            }
            strncpy(szOut, szBuf, i);
            szOut[i] = 0;
            return;
        }
        *szOut = 0;
        return;
    }
    *szOut = 0;
}

void CChatClass::StoreChatMsg(edict_t *pEdict, const char *szText)
{
    if (!szText || !*szText)
        return;
    if (m_PrevMsg[0].szText[0] && !strcmp(szText, m_PrevMsg[0].szText))   // [?] o decompilado perdeu o return deste teste (mensagem repetida)
        return;
    for (int i = 4; i > 0; i--)
        m_PrevMsg[i] = m_PrevMsg[i - 1];
    m_PrevMsg[0].fTime = gpGlobals->time;
    strcpy(m_PrevMsg[0].szText, szText);
    strcpy(m_PrevMsg[0].szSender, STRING(pEdict->v.netname));
}

// ---------------------------------------------------------------- escolha de frases
void CChatClass::StoreRecentUsedSentence(CChatSentence **ppList, CChatSentence *pSentence)
{
    for (int i = 4; i > 0; i--)
        ppList[i] = ppList[i - 1];
    ppList[0] = pSentence;
}

static void AddChoice(TMultiChoice<CChatClass::CChatSentence *> *pM, CChatClass::CChatSentence *pS, short sWeight)
{
    TChoice<CChatClass::CChatSentence *> *pC = new TChoice<CChatClass::CChatSentence *>;
    pC->lo = 0;
    pC->hi = 0;
    pC->lo = pM->iTotal;
    pC->hi = sWeight + pM->iTotal;
    pC->value = pS;
    pM->pChoices->Append(pC);
    pM->iTotal += sWeight;
}

void CChatClass::MakeSentenceChoiceList(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM, CChatSentence **ppRecent)
{
    if (pS->ucNumRandom > BotManager.f_d44 - 1 || pS->ucNumName > BotManager.f_d44)
        return;
    for (unsigned char i = 0; i <= 4; i++)
        if (pS == ppRecent[i] && RANDOM_LONG(1, 100) <= 80)      // frase usada ha pouco: 80% de chance de pular
            return;
    if (!pS->ucPercent)
        return;
    AddChoice(pM, pS, pS->ucPercent);
}

void CChatClass::MakeSentenceChoiceList2(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM, CChatSentence **ppRecent, const char *szName)
{
    if (pS->ucNumRandom > BotManager.f_d44 - 1 || pS->ucNumName > BotManager.f_d44)
        return;
    for (unsigned char i = 0; i <= 4; i++)
        if (pS == ppRecent[i] && RANDOM_LONG(1, 100) <= 80)
            return;
    pS->szName[0] = 0;
    strcpy(pS->szName, szName);                                   // [?] guarda o nome do alvo no proprio elemento
    if (!pS->ucPercent)
        return;
    AddChoice(pM, pS, pS->ucPercent);
}

void CChatClass::MakeSentenceChoiceList3(CChatSentence *pS, TMultiChoice<CChatSentence *> *pM)
{
    if (pS->ucNumRandom > BotManager.f_d44 - 1 || pS->ucNumName > BotManager.f_d44)
        return;
    if (!pS->ucPercent)
        return;
    AddChoice(pM, pS, pS->ucPercent);
}
