
#ifndef CUSTOMMUSICCELL_H_
#define CUSTOMMUSICCELL_H_

class CustomMusicCell {
public:
    CustomMusicCell(char const*, float, float);
    CustomMusicCell(char const*, float, float);

    virtual ~CustomMusicCell();

    void updateBGColor(int);
    void loadFromObject(SongInfoObject*);

};

#endif // CUSTOMMUSICCELL_H_
