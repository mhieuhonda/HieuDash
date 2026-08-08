
#ifndef GJHTTPRESULT_H_
#define GJHTTPRESULT_H_

#include <string>

class GJHttpResult {
public:
    virtual ~GJHttpResult();

    void init(bool, std::string, std::string, GJHttpType);
    void create(bool, std::string, std::string, GJHttpType);

};

#endif // GJHTTPRESULT_H_
