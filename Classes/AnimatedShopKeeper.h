
#ifndef ANIMATEDSHOPKEEPER_H_
#define ANIMATEDSHOPKEEPER_H_

class AnimatedShopKeeper {
public:
    virtual ~AnimatedShopKeeper();

    void startAnimating();
    void animationFinished(char const*);
    void playReactAnimation();
    void init(ShopType);
    void create(ShopType);

};

#endif // ANIMATEDSHOPKEEPER_H_
