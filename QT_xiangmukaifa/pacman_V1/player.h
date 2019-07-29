#ifndef PLAYER_H
#define PLAYER_H

#include "actor.h"

class Player : public Actor
{
private:
    QPixmap sprite_;
    Player() : Actor(0,0){}
    int dxx_, dyy_;
    bool collides(int dx, int dy, char** field, char obj);
public:
    Player(int x, int y);
    bool captured(const Actor& m) const;
    void draw(QPainter& p);
    void timeout(char** field);
    void goUp();
    void goDown();
    void goLeft();
    void goRight();
};

#endif // PLAYER_H
