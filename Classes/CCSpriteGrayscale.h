
#ifndef CCSPRITEGRAYSCALE_H_
#define CCSPRITEGRAYSCALE_H_

#include "cocos2d.h"
#include <string>

class CCSpriteGrayscale {
public:
    virtual ~CCSpriteGrayscale();

    void shaderBody();
    std::string getShaderName();
    CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D*);
    CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    CCSpriteGrayscale* createWithSpriteFrameName(std::string const&);
    void create(std::string const&);
    void create(std::string const&, cocos2d::CCRect const&);

protected:
    std::string m_shaderName;

};

#endif // CCSPRITEGRAYSCALE_H_
