#include <cmath>
#include "actor.h"
#include "player.h"

bool Player::collides(int dx, int dy, char** field, char obj)
{
    int x1 = (x_ + dx) / 20;
    int y1 = (y_ + dy) / 20;
    int x2 = (x_ + dx + 19) / 20;
    int y2 = y1;
    int y3 = (y_ + dy + 19) / 20;
    int x3 = x2;
    int y4 = y3;
    int x4 = x1;
    return !(field[y1][x1] != obj && field[y2][x2] != obj
            && field[y3][x3] != obj && field[y4][x4] != obj
            );

}

Player::Player(int x, int y) : Actor(x, y), sprite_(20, 20), dxx_(0), dyy_(0)
{
    /*QPainter p(&sprite_);
    sprite_.fill(Qt::white);
    p.setPen(Qt::yellow);
    p.setBrush(Qt::yellow);
    p.drawPie(2, 2, 16, 16, 45*16, 270*16);
    p.setPen(Qt::blue);
    p.drawEllipse(10, 4, 2, 2);
    p.end();*/

    //QPainter p(&sprite_);
    sprite_.load("/res/pacman.jpg");
    //p.drawPixmap(x_, y_, sprite_);

    //sprite_.setMask(sprite_.createHeuristicMask());
}

bool Player::captured(const Actor& m) const
{
    return sqrt((x_-m.x_) * (x_ - m.x_) + (y_-m.y_) * (y_-m.y_) ) < 19;
}

void Player::draw(QPainter& p)
{
    if(dx_ == 0)
    {
        if(dy_ < 0)
            sprite_.load(":/res/pacman_up.jpg");
        else
            sprite_.load(":/res/pacman_down.jpg");
    }

    if(dy_ == 0)
    {
        if(dx_ > 0)
            sprite_.load(":/res/pacman_right.jpg");
        else
            sprite_.load(":/res/pacman_left.jpg");
    }

    p.save();
    p.translate(x_ + 10, y_ + 10);
    p.drawPixmap(-10, -10, sprite_);
    p.restore();
}

void Player::timeout(char** field)
{
    if(!collides(dxx_, dyy_, field, '#')) {dx_ = dxx_; dy_ = dyy_;}
    if(collides(dx_, dy_, field, '#')) {dx_ = 0; dy_ = 0;}

    if(collides(dx_, dy_, field, 'm'))
    {

    }

    int row = y_ / 20;
    int col = x_ / 20;


    field[row][col] = ' ';

    x_ = x_ + dx_;
    y_ = y_ + dy_;

    row = y_ / 20;
    col = x_ / 20;


    if( col >= 21) x_ = 0;
    if( x_ < 0 ) x_ = 21*20 + x_;

    field[row][col] = 'p';
}

void Player::goUp()    { dxx_ = 0; dyy_ = -5; }
void Player::goDown()  { dxx_ = 0; dyy_ = 5;  }
void Player::goLeft()  { dxx_ = -5; dyy_ = 0; }
void Player::goRight() { dxx_ = 5; dyy_ = 0;  }
