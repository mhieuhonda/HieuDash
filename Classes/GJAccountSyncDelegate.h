
#ifndef GJACCOUNTSYNCDELEGATE_H_
#define GJACCOUNTSYNCDELEGATE_H_

class GJAccountSyncDelegate {
public:
    void syncAccountFailed(BackupAccountError, int);
    void syncAccountFinished();

};

#endif // GJACCOUNTSYNCDELEGATE_H_
