
#include "GJAccountManager.h"

GJAccountManager::~GJAccountManager() {
    this->cleanup();
}

void GJAccountManager::dataLoaded(DS_Dictionary*) {
    // Data loading from dictionary - stub
}

void GJAccountManager::firstSetup() {
    // Setup operation - stub
}

void GJAccountManager::handleItND(cocos2d::CCNode*, void*) {
    // Stub - not yet implemented
}

bool GJAccountManager::isDLActive(char const*) {
    return false;
}

void GJAccountManager::getDLObject(char const*) {
    // Stub - not yet implemented
}

GJAccountManager* GJAccountManager::sharedState() {
    return nullptr;
}

void GJAccountManager::syncAccount(std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::encodeDataTo(DS_Dictionary*) {
    // Data encoding to dictionary - stub
}

void GJAccountManager::loginAccount(std::string username, std::string password) {
    if (username.empty() || password.empty()) return;
    std::string shaPw = this->getShaPassword(password);
    std::string url = "http://www.boomlings.com/database/accounts/loginGJAccount.php";
    std::string postStr = "gameVersion=22&binaryVersion=41&secret=Wmfd2893gb7&udid=" + m_udid
        + "&userName=" + username + "&password=" + shaPw;
    this->ProcessHttpRequest(url, postStr, "loginAccount", GJHttpType::loginAccount);
}

void GJAccountManager::addDLToActive(char const*) {
    // Add/insert operation - stub
}

void GJAccountManager::addDLToActive(char const*, cocos2d::CCObject*) {
    // Add/insert operation - stub
}

void GJAccountManager::backupAccount(std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::linkToAccount(std::string, std::string, int, int) {
    // Stub - not yet implemented
}

void GJAccountManager::getShaPassword(std::string password) {
    // Stub - not yet implemented
}

void GJAccountManager::handleItDelayed(bool, std::string, std::string, GJHttpType) {
    // Stub - not yet implemented
}

void GJAccountManager::registerAccount(std::string username, std::string password, std::string email) {
    if (username.empty() || password.empty()) return;
    std::string shaPw = this->getShaPassword(password);
    std::string url = "http://www.boomlings.com/database/accounts/registerGJAccount.php";
    std::string postStr = "gameVersion=22&binaryVersion=41&secret=Wmfd2893gb7&udid=" + m_udid
        + "&userName=" + username + "&password=" + shaPw + "&email=" + email;
    this->ProcessHttpRequest(url, postStr, "registerAccount", GJHttpType::registerAccount);
}

void GJAccountManager::getAccountSyncURL() {
    // Stub - not yet implemented
}

void GJAccountManager::unlinkFromAccount() {
    // Stub - not yet implemented
}

void GJAccountManager::ProcessHttpRequest(std::string url, std::string postData, std::string tag, GJHttpType httpType) {
    cocos2d::extension::CCHttpRequest* request = new cocos2d::extension::CCHttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(cocos2d::extension::CCHttpRequest::kHttpPost);
    request->setRequestData(postData.c_str(), postData.size());
    request->setTag(tag.c_str());
    request->setResponseCallback(this, (cocos2d::extension::SEL_HttpResponse)(&GJAccountManager::onProcessHttpRequestCompleted));
    cocos2d::extension::CCHttpClient::getInstance()->send(request);
    request->release();
}

void GJAccountManager::removeDLFromActive(char const*) {
    // Remove/clear operation - stub
}

void GJAccountManager::getAccountBackupURL() {
    // Stub - not yet implemented
}

void GJAccountManager::updateAccountSettings(int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string) {
    // Update/refresh operation - stub
}

void GJAccountManager::onSyncAccountCompleted(std::string, std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::onLoginAccountCompleted(std::string response, std::string tag) {
    if (response == "-1") {
        // Login failed
        return;
    }
    // Parse account ID and user ID from response: "accountId,userId"
    // Store credentials on success
}

void GJAccountManager::onBackupAccountCompleted(std::string, std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::onRegisterAccountCompleted(std::string, std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::onGetAccountSyncURLCompleted(std::string, std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) {
    if (!response || !response->isSucceed()) {
        return;
    }
    std::vector<char>* responseData = response->getResponseData();
    std::string responseStr(responseData->begin(), responseData->end());
    std::string tag = response->getHttpRequest()->getTag();
    if (tag == "loginAccount") {
        this->onLoginAccountCompleted(responseStr, tag);
    } else if (tag == "registerAccount") {
        this->onRegisterAccountCompleted(responseStr, tag);
    } else if (tag == "syncAccount") {
        this->onSyncAccountCompleted(responseStr, tag);
    } else if (tag == "backupAccount") {
        this->onBackupAccountCompleted(responseStr, tag);
    }
}

void GJAccountManager::onGetAccountBackupURLCompleted(std::string, std::string) {
    // Stub - not yet implemented
}

void GJAccountManager::onUpdateAccountSettingsCompleted(std::string, std::string) {
    // Update/refresh operation - stub
}

bool GJAccountManager::init() {
    bool ret = GManager::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJAccountManager::handleIt(bool, std::string, std::string, GJHttpType) {
    // Stub - not yet implemented
}

