#include "GameStatsManager.h"
#include "cocos2d.h"

USING_NS_CC;

static GameStatsManager* s_pSharedGSM = nullptr;

GameStatsManager::GameStatsManager() {
    // v0.5: minimal in-memory state.
}

GameStatsManager* GameStatsManager::sharedState() {
    if (!s_pSharedGSM) {
        s_pSharedGSM = new GameStatsManager();
        s_pSharedGSM->init();
    }
    return s_pSharedGSM;
}

bool GameStatsManager::init() {
    return true;
}

void GameStatsManager::checkAchievement(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameStatsManager::completedLevel(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameStatsManager::dataLoaded(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameStatsManager::encodeDataTo(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameStatsManager::firstSetup() {
    // TODO: implement (recovered from binary, body unknown)
}

int GameStatsManager::getLevelKey(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameStatsManager::getStat(char const*) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

void GameStatsManager::hasCompletedLevel(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameStatsManager::incrementStat(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

GameStatsManager::~GameStatsManager() {
    if (s_pSharedGSM == this) s_pSharedGSM = nullptr;
}
