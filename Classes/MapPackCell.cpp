#include "MapPackCell.h"
#include "GJMapPack.h"

MapPackCell::MapPackCell()
    : m_pMapPack(nullptr)
    , m_pPackNameLabel(nullptr)
    , m_pStarsLabel(nullptr)
    , m_pCoinsLabel(nullptr)
    , m_pLevelCells(nullptr)
    , m_pBackground(nullptr) {}

MapPackCell* MapPackCell::create(char const* key, float w, float h) {
    MapPackCell* ret = new MapPackCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool MapPackCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void MapPackCell::loadFromMapPack(GJMapPack* pack) { m_pMapPack = pack; }
void MapPackCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

MapPackCell::~MapPackCell() {}
