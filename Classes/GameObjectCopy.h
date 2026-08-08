
#ifndef GAMEOBJECTCOPY_H_
#define GAMEOBJECTCOPY_H_

class GameObjectCopy {
public:
    virtual ~GameObjectCopy();

    void resetObject();
    void init(GameObject*);
    void create(GameObject*);

};

#endif // GAMEOBJECTCOPY_H_
