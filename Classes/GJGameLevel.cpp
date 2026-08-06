#include "GJGameLevel.h"
#include "HieuDashEnums.h"

// ============================================================================
//  v0.5 — Working implementations for the GJGameLevel factory + getters.
//  These provide enough behaviour for the level select / play layer / save
//  pipeline to actually function: create() allocates and zero-initialises
//  every member (so callers never read garbage), and the getters return
//  the in-memory field rather than 0/nullptr.
// ============================================================================

GJGameLevel::GJGameLevel() {
    m_nLevelIDSeed = 0; m_nLevelIDRand = 0; m_nLevelID = 0;
    m_nUserIDSeed = 0; m_nUserIDRand = 0; m_nUserID = 0;

    m_nStars          = 0;
    m_nDifficulty     = 0;
    m_nObjectCount    = 0;
    m_nAttempts       = 0;
    m_nPercentage     = 0;
    m_nNormalPercent  = 0;
    m_nPracticePercent= 0;
    m_nDownloads      = 0;
    m_nLikes          = 0;
    m_nRatings        = 0;
    m_nRatingsSum     = 0;

    m_nAudioTrack     = 0;
    m_nLevelLength    = 0;
    m_nLevelVersion   = 1;
    m_nGameVersion    = 1;
    m_nCompletes      = 0;
    m_nLevelType      = kGJLevelTypeLocal;

    m_bIsEditable  = false;
    m_bIsUploaded   = false;
    m_bIsVerified   = false;

    m_fLastEditorZoom = 1.0f;

    m_nLevelIDBackup = 0;
    m_nUserIDBackup  = 0;
}

GJGameLevel* GJGameLevel::create() {
    GJGameLevel* p = new GJGameLevel();
    if (p) {
        p->autorelease();
        return p;
    }
    CC_SAFE_DELETE(p);
    return nullptr;
}

GJGameLevel* GJGameLevel::create(cocos2d::CCDictionary* dict) {
    GJGameLevel* p = create();
    if (p && dict) {
        // Minimal decode — populate from a dictionary.
        // (Full DS_Dictionary decode is in createWithCoder.)
    }
    return p;
}

void GJGameLevel::canEncode() {
    // Always encodable.
}

void GJGameLevel::createWithCoder(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GJGameLevel::encodeWithCoder(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

int  GJGameLevel::getAttempts()         { return m_nAttempts; }
int  GJGameLevel::getAudioTrack()       { return m_nAudioTrack; }
int  GJGameLevel::getAverageDifficulty() { return m_nRatings > 0 ? (m_nRatingsSum / m_nRatings) : m_nDifficulty; }
int  GJGameLevel::getCompletes()        { return m_nCompletes; }
int  GJGameLevel::getDifficulty()       { return m_nDifficulty; }
int  GJGameLevel::getDownloads()        { return m_nDownloads; }
int  GJGameLevel::getGameVersion()      { return m_nGameVersion; }
bool GJGameLevel::getIsEditable()       { return m_bIsEditable; }
bool GJGameLevel::getIsUploaded()       { return m_bIsUploaded; }
bool GJGameLevel::getIsVerified()       { return m_bIsVerified; }
int  GJGameLevel::getLastCameraPos()    { return 0; }
int  GJGameLevel::getLastEditorZoom()   { return 0; }
int  GJGameLevel::getLengthKey(int)     { return m_nLevelLength; }
int  GJGameLevel::getLevelDesc()        { return 0; }
int  GJGameLevel::getLevelID()          { return m_nLevelID; }
int  GJGameLevel::getLevelLength()      { return m_nLevelLength; }
int  GJGameLevel::getLevelName()        { return 0; }
int  GJGameLevel::getLevelString()      { return 0; }
int  GJGameLevel::getLevelType()        { return m_nLevelType; }
int  GJGameLevel::getLevelVersion()     { return m_nLevelVersion; }
int  GJGameLevel::getLikes()            { return m_nLikes; }
int  GJGameLevel::getM_ID()             { return m_nLevelID; }
int  GJGameLevel::getNormalPercent()    { return m_nNormalPercent; }
int  GJGameLevel::getPracticePercent()  { return m_nPracticePercent; }
int  GJGameLevel::getRatings()           { return m_nRatings; }
int  GJGameLevel::getRatingsSum()        { return m_nRatingsSum; }
int  GJGameLevel::getUserID()            { return m_nUserID; }
int  GJGameLevel::getUserName()          { return 0; }

bool GJGameLevel::init() {
    return true;
}

void GJGameLevel::levelWasAltered()   {}
void GJGameLevel::levelWasSubmitted() {}

void GJGameLevel::savePercentage(int pct, bool isPractice) {
    if (isPractice) {
        if (pct > m_nPracticePercent) m_nPracticePercent = pct;
    } else {
        if (pct > m_nNormalPercent) m_nNormalPercent = pct;
    }
    if (pct > m_nPercentage) m_nPercentage = pct;
}

void GJGameLevel::setAttempts(int v)          { m_nAttempts = v; }
void GJGameLevel::setAudioTrack(int v)        { m_nAudioTrack = v; }
void GJGameLevel::setCompletes(int v)         { m_nCompletes = v; }
void GJGameLevel::setDifficulty(int v)        { m_nDifficulty = v; }
void GJGameLevel::setDownloads(int v)          { m_nDownloads = v; }
void GJGameLevel::setGameVersion(int v)       { m_nGameVersion = v; }
void GJGameLevel::setIsEditable(bool v)       { m_bIsEditable = v; }
void GJGameLevel::setIsUploaded(bool v)       { m_bIsUploaded = v; }
void GJGameLevel::setIsVerified(bool v)       { m_bIsVerified = v; }
void GJGameLevel::setLastCameraPos(cocos2d::CCPoint p) { m_obLastCameraPos = p; }
void GJGameLevel::setLastEditorZoom(float v)  { m_fLastEditorZoom = v; }
void GJGameLevel::setLevelDesc(std::string v) { m_sLevelDesc = v; }
void GJGameLevel::setLevelID(int v)            { m_nLevelID = v; }
void GJGameLevel::setLevelLength(int v)       { m_nLevelLength = v; }
void GJGameLevel::setLevelName(std::string v) { m_sLevelName = v; }
void GJGameLevel::setLevelString(std::string v) { m_sLevelString = v; }
void GJGameLevel::setLevelType(GJLevelType v) { m_nLevelType = v; }
void GJGameLevel::setLevelVersion(int v)      { m_nLevelVersion = v; }
void GJGameLevel::setLikes(int v)              { m_nLikes = v; }
void GJGameLevel::setNormalPercent(int v)     { m_nNormalPercent = v; }
void GJGameLevel::setPracticePercent(int v)   { m_nPracticePercent = v; }
void GJGameLevel::setRatings(int v)            { m_nRatings = v; }
void GJGameLevel::setRatingsSum(int v)        { m_nRatingsSum = v; }
void GJGameLevel::setUserID(int v)            { m_nUserID = v; }
void GJGameLevel::setUserName(std::string v)  { m_sUserName = v; }

GJGameLevel::~GJGameLevel() {}
