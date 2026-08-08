
#ifndef GJACCOUNTREGISTERDELEGATE_H_
#define GJACCOUNTREGISTERDELEGATE_H_

class GJAccountRegisterDelegate {
public:
    void registerAccountFailed(AccountError);
    void registerAccountFinished();

};

#endif // GJACCOUNTREGISTERDELEGATE_H_
