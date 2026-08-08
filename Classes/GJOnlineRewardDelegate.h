
#ifndef GJONLINEREWARDDELEGATE_H_
#define GJONLINEREWARDDELEGATE_H_

#include <string>

class GJOnlineRewardDelegate {
public:
    void onlineRewardStatusFailed();
    void onlineRewardStatusFinished(std::string);

};

#endif // GJONLINEREWARDDELEGATE_H_
