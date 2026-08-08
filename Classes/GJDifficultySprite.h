// ============================================================
// GJDifficultySprite.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJDIFFICULTYSPRITE_H_
#define GJDIFFICULTYSPRITE_H_

class GJDifficultySprite {
public:
    virtual ~GJDifficultySprite();
    virtual ~GJDifficultySprite();
    virtual ~GJDifficultySprite();

    void getDifficultyFrame(int, GJDifficultyName);
    void updateFeatureState(GJFeatureState);
    void updateDifficultyFrame(int, GJDifficultyName);
    void updateFeatureStateFromLevel(GJGameLevel*);
    void init(int, GJDifficultyName);
    void create(int, GJDifficultyName);

};

#endif // GJDIFFICULTYSPRITE_H_
