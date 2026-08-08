// ============================================================
// GJMultiplayerManager.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJMULTIPLAYERMANAGER_H_
#define GJMULTIPLAYERMANAGER_H_

#include "cocos2d.h"
#include <string>

class GJMultiplayerManager {
public:
    virtual ~GJMultiplayerManager();
    virtual ~GJMultiplayerManager();
    virtual ~GJMultiplayerManager();

    void addComment(std::string, int);
    void dataLoaded(DS_Dictionary*);
    void firstSetup();
    void handleItND(cocos2d::CCNode*, void*);
    void isDLActive(char const*);
    void getDLObject(char const*);
    void sharedState();
    void encodeDataTo(DS_Dictionary*);
    void addDLToActive(char const*);
    void addDLToActive(char const*, cocos2d::CCObject*);
    void uploadComment(std::string, int);
    void handleItDelayed(bool, std::string, std::string, GJHttpType);
    void getBasePostString();
    void ProcessHttpRequest(std::string, std::string, std::string, GJHttpType);
    void removeDLFromActive(char const*);
    void createAndAddComment(std::string, int);
    void onExitLobbyCompleted(std::string, std::string);
    void onJoinLobbyCompleted(std::string, std::string);
    void getLastCommentIDForGame(int);
    void onUploadCommentCompleted(std::string, std::string);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void init();
    void handleIt(bool, std::string, std::string, GJHttpType);
    void exitLobby(int);
    void joinLobby(int);

protected:
    std::string m_basePostString;
    int m_lastCommentIDForGame;

};

#endif // GJMULTIPLAYERMANAGER_H_
