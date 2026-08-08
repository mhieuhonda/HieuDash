// ============================================================
// LevelCommentDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef LEVELCOMMENTDELEGATE_H_
#define LEVELCOMMENTDELEGATE_H_

#include "cocos2d.h"
#include <string>

class LevelCommentDelegate {
public:
    void setupPageInfo(std::string, char const*);
    void loadCommentsFailed(char const*);
    void loadCommentsFinished(cocos2d::CCArray*, char const*);
    void updateUserScoreFinished();

};

#endif // LEVELCOMMENTDELEGATE_H_
