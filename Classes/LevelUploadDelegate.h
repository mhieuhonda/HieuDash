
#ifndef LEVELUPLOADDELEGATE_H_
#define LEVELUPLOADDELEGATE_H_

class LevelUploadDelegate {
public:
    void levelUploadFailed(GJGameLevel*);
    void levelUploadFinished(GJGameLevel*);

};

#endif // LEVELUPLOADDELEGATE_H_
