
#ifndef STATSOBJECT_H_
#define STATSOBJECT_H_

class StatsObject {
public:
    virtual ~StatsObject();

    void init(char const*, int);
    void create(char const*, int);

};

#endif // STATSOBJECT_H_
