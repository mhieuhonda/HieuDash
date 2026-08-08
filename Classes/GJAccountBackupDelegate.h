
#ifndef GJACCOUNTBACKUPDELEGATE_H_
#define GJACCOUNTBACKUPDELEGATE_H_

class GJAccountBackupDelegate {
public:
    void backupAccountFailed(BackupAccountError, int);
    void backupAccountFinished();

};

#endif // GJACCOUNTBACKUPDELEGATE_H_
