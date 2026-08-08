
#ifndef DOWNLOADMESSAGEDELEGATE_H_
#define DOWNLOADMESSAGEDELEGATE_H_

class DownloadMessageDelegate {
public:
    void downloadMessageFailed(int);
    void downloadMessageFinished(GJUserMessage*);

};

#endif // DOWNLOADMESSAGEDELEGATE_H_
