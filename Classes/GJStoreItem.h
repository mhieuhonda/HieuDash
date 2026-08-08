
#ifndef GJSTOREITEM_H_
#define GJSTOREITEM_H_

#include <string>

class GJStoreItem {
public:
    virtual ~GJStoreItem();

    void getCurrencyKey();
    void init(int, int, int, int, ShopType);
    void create(int, int, int, int, ShopType);

protected:
    std::string m_currencyKey;

};

#endif // GJSTOREITEM_H_
