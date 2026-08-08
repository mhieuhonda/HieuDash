
#ifndef INFOALERTBUTTON_H_
#define INFOALERTBUTTON_H_

#include <string>

class InfoAlertButton {
public:
    virtual ~InfoAlertButton();

    void init(std::string, std::string, float);
    void create(std::string, std::string, float);
    void activate();

};

#endif // INFOALERTBUTTON_H_
