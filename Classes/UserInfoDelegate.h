
#ifndef USERINFODELEGATE_H_
#define USERINFODELEGATE_H_

class UserInfoDelegate {
public:
    void userInfoChanged(GJUserScore*);
    void getUserInfoFailed(int);
    void getUserInfoFinished(GJUserScore*);

};

#endif // USERINFODELEGATE_H_
