
#ifndef PLATFORMDOWNLOADDELEGATE_H_
#define PLATFORMDOWNLOADDELEGATE_H_

class PlatformDownloadDelegate {
public:
    void downloadFailed(char const*);
    void downloadFinished(char const*);

};

#endif // PLATFORMDOWNLOADDELEGATE_H_
