
#ifndef LEVELDOWNLOADDELEGATE_H_
#define LEVELDOWNLOADDELEGATE_H_

class LevelDownloadDelegate {
public:
    void levelDownloadFailed(int);
    void levelDownloadFinished(GJGameLevel*);

};

#endif // LEVELDOWNLOADDELEGATE_H_
