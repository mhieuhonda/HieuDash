
#ifndef BOOMLISTLAYER_H_
#define BOOMLISTLAYER_H_

class BoomListLayer {
public:
    virtual ~BoomListLayer();

    void init(BoomListView*, char const*);
    void create(BoomListView*, char const*);

};

#endif // BOOMLISTLAYER_H_
