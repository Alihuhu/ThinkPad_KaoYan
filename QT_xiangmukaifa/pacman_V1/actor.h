#ifndef ACTOR_H
#define ACTOR_H

#include <QPainter>

class Actor
{
public:
    int x_, y_;
    int dx_, dy_;
    Actor(int x, int y) : x_(x), y_(y), dx_(0), dy_(0){}
    virtual void draw(QPainter& p) = 0;
    virtual void timeout(char** field) = 0;
    void setPosition(int x, int y){x_ = x; y_ = y; dx_ = 0; dy_ = 0;}
    int x() const {return x_;}
    int y() const {return y_;}
};


#endif // ACTOR_H
