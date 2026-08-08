
#ifndef SEARCHBUTTON_H_
#define SEARCHBUTTON_H_

class SearchButton {
public:
    virtual ~SearchButton();

    void init(char const*, char const*, float, char const*);
    void create(char const*, char const*, float, char const*);

};

#endif // SEARCHBUTTON_H_
