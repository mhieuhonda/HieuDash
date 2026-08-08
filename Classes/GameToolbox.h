// ============================================================
// GameToolbox.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GAMETOOLBOX_H_
#define GAMETOOLBOX_H_

#include "cocos2d.h"
#include <string>

class GameToolbox {
public:
    void bounceTime(float);
    void easeToText(int);
    void fast_srand(unsigned long);
    void gen_random(int);
    void getResponse(cocos2d::extension::CCHttpResponse*);
    void intToString(int);
    void openAppPage();
    void openRateURL(std::string, std::string);
    void strongColor(cocos2d::_ccColor3B);
    void colorToSepia(cocos2d::_ccColor3B, float);
    void isRateEasing(int);
    void addBackButton(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
    void fast_rand_0_1();
    void getEasedValue(float, int, float);
    void getTimeString(int, bool);
    void getfast_srand();
    void hsvFromString(std::string const&, char const*);
    void postClipVisit();
    void stringFromHSV(cocos2d::_ccHSVValue, char const*);
    void getEasedAction(cocos2d::CCActionInterval*, int, float);
    void msToTimeString(int, int);
    void pointsToString(int);
    void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue);
    void transformColor(cocos2d::_ccColor3B const&, float, float, float);
    void createHashString(std::string const&, int);
    void doWeHaveInternet();
    void getMultipliedHSV(cocos2d::_ccHSVValue const&, float);
    void intToShortString(int);
    void saveStringToFile(std::string const&, std::string const&);
    void stringSetupToMap(std::string const&, char const*, std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string> > >&);
    void getDropActionWEnd(float, float, float, cocos2d::CCAction*, float);
    void getInvertedEasing(int);
    void getRelativeOffset(GameObject*, cocos2d::CCPoint);
    void stringSetupToDict(std::string const&, char const*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
    void fast_rand_minus1_1();
    void particleFromString(std::string const&, cocos2d::CCParticleSystemQuad*, bool);
    void particleFromStruct(cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool);
    void getDropActionWDelay(float, float, float, cocos2d::CCNode*, void (cocos2d::CCObject::*)());
    void alignItemsVertically(cocos2d::CCArray*, float, cocos2d::CCPoint);
    void contentScaleClipRect(cocos2d::CCRect&);
    void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float);
    void preVisitWithClipRect(cocos2d::CCRect);
    void saveParticleToString(cocos2d::CCParticleSystemQuad*);
    void addRThumbScrollButton(cocos2d::CCLayer*);
    void alignItemsHorisontally(cocos2d::CCArray*, float, cocos2d::CCPoint, bool);
    void mergeDictsSkipConflict(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
    void particleStringToStruct(std::string const&, cocos2d::ParticleStruct&);
    void getLargestMergedIntDicts(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
    void mergeDictsSaveLargestInt(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
    void preVisitWithClippingRect(cocos2d::CCNode*, cocos2d::CCRect);
    void timestampToHumanReadable(long);
    void isIOS();
    void fast_rand();

};

#endif // GAMETOOLBOX_H_
