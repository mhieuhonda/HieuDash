#include "GJAccountManager.h"

static GJAccountManager* s_sharedAccountManager = nullptr;

GJAccountManager::GJAccountManager()
    : m_nAccountID(0)
    , m_nPlayerIcon(0)
    , m_bLoggedIn(false)
    , m_pDelegate(nullptr) {}

GJAccountManager* GJAccountManager::sharedState() {
    if (!s_sharedAccountManager) {
        s_sharedAccountManager = new GJAccountManager();
        s_sharedAccountManager->init();
    }
    return s_sharedAccountManager;
}

bool GJAccountManager::init() { return true; }
void GJAccountManager::dataLoaded(DS_Dictionary* dict) {}
void GJAccountManager::encodeDataTo(DS_Dictionary* dict) {}
void GJAccountManager::loginAccount(std::string user, std::string pass) { m_sUserName = user; m_sPassword = pass; m_bLoggedIn = true; }
void GJAccountManager::logoutAccount() { m_bLoggedIn = false; m_sUserName = ""; m_sPassword = ""; m_sGJP = ""; }
bool GJAccountManager::isLoggedIn() { return m_bLoggedIn; }
int GJAccountManager::getAccountID() { return m_nAccountID; }
std::string GJAccountManager::getUserName() { return m_sUserName; }
void GJAccountManager::setAccountID(int id) { m_nAccountID = id; }
void GJAccountManager::setUserName(std::string name) { m_sUserName = name; }
void GJAccountManager::setPassword(std::string pass) { m_sPassword = pass; }

GJAccountManager::~GJAccountManager() {}
