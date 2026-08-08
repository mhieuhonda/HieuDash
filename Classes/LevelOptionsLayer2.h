
#ifndef LEVELOPTIONSLAYER2_H_
#define LEVELOPTIONSLAYER2_H_

class LevelOptionsLayer2 {
public:
    virtual ~LevelOptionsLayer2();

    void setupOptions();
    void init(LevelSettingsObject*);
    void create(LevelSettingsObject*);

};

#endif // LEVELOPTIONSLAYER2_H_
