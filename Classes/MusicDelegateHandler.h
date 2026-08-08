
#ifndef MUSICDELEGATEHANDLER_H_
#define MUSICDELEGATEHANDLER_H_

class MusicDelegateHandler {
public:
    virtual ~MusicDelegateHandler();

    void init(MusicDownloadDelegate*);
    void create(MusicDownloadDelegate*);

};

#endif // MUSICDELEGATEHANDLER_H_
