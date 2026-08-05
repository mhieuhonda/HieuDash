#include "TableViewCell.h"

TableViewCell::TableViewCell()
    : m_pMainLayer(nullptr)
    , m_fWidth(0.0f)
    , m_fHeight(0.0f)
    , m_nCellIndex(0)
    , m_bSelected(false) {}

TableViewCell* TableViewCell::create(char const* key, float width, float height) {
    TableViewCell* ret = new TableViewCell();
    if (ret && ret->init(key, width, height)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool TableViewCell::init(char const* key, float width, float height) {
    if (!cocos2d::CCLayer::init()) return false;
    m_fWidth = width;
    m_fHeight = height;
    return true;
}

void TableViewCell::setCellIndex(int idx) { m_nCellIndex = idx; }
int TableViewCell::getCellIndex() { return m_nCellIndex; }
void TableViewCell::setSelected(bool sel) { m_bSelected = sel; }
bool TableViewCell::isSelected() { return m_bSelected; }
void TableViewCell::updateBGColor(int idx) {}
void TableViewCell::draw() { cocos2d::CCLayer::draw(); }

TableViewCell::~TableViewCell() {}
