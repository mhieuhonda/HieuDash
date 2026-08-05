#include "OBB2D.h"

OBB2D::OBB2D()
    : m_obCenter(cocos2d::CCPointZero)
    , m_obHalfWidths(cocos2d::CCPointZero)
    , m_fRotation(0.0f)
    , m_obAxisX(cocos2d::CCPointZero)
    , m_obAxisY(cocos2d::CCPointZero) {}

OBB2D* OBB2D::create(cocos2d::CCRect rect, float rotation) {
    OBB2D* ret = new OBB2D();
    if (ret && ret->init(rect, rotation)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool OBB2D::init(cocos2d::CCRect rect, float rotation) {
    if (!cocos2d::CCNode::init()) return false;
    m_obCenter = cocos2d::CCPoint(rect.origin.x + rect.size.width / 2, rect.origin.y + rect.size.height / 2);
    m_obHalfWidths = cocos2d::CCPoint(rect.size.width / 2, rect.size.height / 2);
    m_fRotation = rotation;
    calculateCorners();
    return true;
}

void OBB2D::calculateCorners() {
    float cosR = cosf(m_fRotation);
    float sinR = sinf(m_fRotation);
    m_obAxisX = cocos2d::CCPoint(cosR, sinR);
    m_obAxisY = cocos2d::CCPoint(-sinR, cosR);
    m_obCorners[0] = m_obCenter - m_obAxisX * m_obHalfWidths.x - m_obAxisY * m_obHalfWidths.y;
    m_obCorners[1] = m_obCenter + m_obAxisX * m_obHalfWidths.x - m_obAxisY * m_obHalfWidths.y;
    m_obCorners[2] = m_obCenter + m_obAxisX * m_obHalfWidths.x + m_obAxisY * m_obHalfWidths.y;
    m_obCorners[3] = m_obCenter - m_obAxisX * m_obHalfWidths.x + m_obAxisY * m_obHalfWidths.y;
}

bool OBB2D::overlaps(OBB2D* other) { return overlaps1Way(other) && other->overlaps1Way(this); }
bool OBB2D::overlaps1Way(OBB2D* other) { return true; /* stub */ }
void OBB2D::setCenter(cocos2d::CCPoint center) { m_obCenter = center; calculateCorners(); }
void OBB2D::setHalfWidths(cocos2d::CCPoint hw) { m_obHalfWidths = hw; calculateCorners(); }
void OBB2D::setRotation(float rot) { m_fRotation = rot; calculateCorners(); }
cocos2d::CCRect OBB2D::getBoundingBox() { return cocos2d::CCRectMake(0, 0, 0, 0); }
bool OBB2D::containsPoint(cocos2d::CCPoint point) { return false; }

OBB2D::~OBB2D() {}
