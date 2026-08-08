
#ifndef GJMPDELEGATE_H_
#define GJMPDELEGATE_H_

class GJMPDelegate {
public:
    void updateComments();
    void joinLobbyFailed(int, GJMPErrorCode);
    void joinLobbyFinished(int);
    void didUploadMPComment(int);

};

#endif // GJMPDELEGATE_H_
