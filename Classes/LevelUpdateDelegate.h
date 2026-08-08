
#ifndef LEVELUPDATEDELEGATE_H_
#define LEVELUPDATEDELEGATE_H_

class LevelUpdateDelegate {
public:
    void levelUpdateFailed(int);
    void levelUpdateFinished(GJGameLevel*, UpdateResponse);

};

#endif // LEVELUPDATEDELEGATE_H_
