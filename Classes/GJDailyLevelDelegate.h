
#ifndef GJDAILYLEVELDELEGATE_H_
#define GJDAILYLEVELDELEGATE_H_

class GJDailyLevelDelegate {
public:
    void dailyStatusFailed(GJTimedLevelType, GJErrorCode);
    void dailyStatusFinished(GJTimedLevelType);

};

#endif // GJDAILYLEVELDELEGATE_H_
