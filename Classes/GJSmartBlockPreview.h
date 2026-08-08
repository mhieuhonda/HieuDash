
#ifndef GJSMARTBLOCKPREVIEW_H_
#define GJSMARTBLOCKPREVIEW_H_

#include <string>

class GJSmartBlockPreview {
public:
    virtual ~GJSmartBlockPreview();

    void addPreview(std::string, std::string, LevelEditorLayer*);
    GJSmartBlockPreview* createInfoLabel();
    void addTemplateGuide(SmartPrefabResult, float);
    void addTemplateGuide(std::string, int);
    void toggleSelectItem(bool);
    void init(std::string);
    void create(std::string);
    void addCount(int);
    void addChance(int, int);

};

#endif // GJSMARTBLOCKPREVIEW_H_
