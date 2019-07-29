#ifndef GHOST_H
#define GHOST_H

#include <QPainter>
#include "actor.h"

class Ghost : public Actor
{
public:
    enum DIRECTION {UP, DOWN, LEFT, RIGHT, NO};
private:
    DIRECTION direction_;
    QPixmap sprite_;
    int moveTimer_;
    bool scary_;
    bool collide_;
    bool eaten_;
    const int defaultSpeed_ = 4;
    const int scarySpeed_ = 2;
    const int viewRange_ = 5;
    Qt::GlobalColor color_;

    DIRECTION getDirection();
    DIRECTION changeDirection(DIRECTION dir);
    bool validDirection(char** field, DIRECTION dir);
    DIRECTION searchPlayer(char** field);
    void moveRandom(char** field);
    void moveInDirection(DIRECTION dir);

public:
    Ghost();
    void setColor(Qt::GlobalColor color) {color_ = color;}
    void draw(QPainter& p);
    void timeout(char** field);
    void setScary(bool b) {scary_ = b;}
    void setEaten(bool b) {eaten_ = b;}
    bool collide() const {return collide_;}
    bool scary() const {return scary_;}
    bool eaten() const {return eaten_;}
};

#endif // GHOST_H
