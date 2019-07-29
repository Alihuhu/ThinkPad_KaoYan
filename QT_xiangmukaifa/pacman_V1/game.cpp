#include <QApplication>
#include <QtWidgets>
#include <QKeyEvent>
#include <QPixmap>
#include <QImage>
#include <QDebug>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "game.h"

const char Template[19][22] =
{
    "#####################",
    "#.......####........#",
    "#.#...............#.#",
    "#.#.#####..####.#.#.#",
    "#...................#",
    "#.#.#####..######...#",
    "#.#...............#.#",
    "#.#.##.##..##.###.#.#",
    "#O.....#....#......O#",
    "#..#...######.#..####",
    "#..#................#",
    "#..#.##.#..###.#.##.#",
    "#..#.##.#..###.#....#",
    "#.................#.#",
    "#..#.#.##.......#...#",
    "#...........##..#.#.#",
    "#..#.####.......#.#.#",
    "#O.................O#",
    "#####################"
};

void Game::init()
{
    player_.setPosition(280, 120);
    for(int i = 0; i < 19; ++i)
        for(int j = 0; j < 21; ++j)
            field_[i][j] = Template[i][j];
    for(int i = 0; i < monstersNum_; ++i)
    {
        monsters_[i].setPosition(160+20*i, 160);
        monsters_[i].setColor(monstersColors_[i]);
    }
}

void Game::copyField(char** dst, char** src)
{
    for(int i = 0; i < fieldHeight_; ++i)
    {
        for(int j = 0; j < fieldWidth_; ++j)
        {
            dst[i][j] = src[i][j];
        }
    }
}

void Game::deleteField(char** field)
{
    for(int i = 0; i < fieldHeight_; ++i)
        delete[] field[i];

    delete[] field;
}

void Game::drawField(QPainter &p)
{
    for(int i = 0; i < fieldHeight_; ++i)
    {
        for(int j = 0; j < fieldWidth_; ++j)
        {
            switch(field_[i][j])
            {
            case ' ':
                p.setPen(background_);
                p.setBrush(background_);
                p.drawRect(j*20, i*20, 20, 20);
                break;
            case '.':
                p.setPen(background_);
                p.setBrush(background_);
                p.drawRect(j*20, i*20, 20, 20);
                p.setPen(Qt::yellow);
                p.setBrush(Qt::yellow);
                p.drawEllipse(j*20+9, i*20+9, 4, 4);
                break;
            case '#':
                p.setPen(Qt::darkBlue);
                p.setBrush(Qt::darkBlue);
                p.drawRect(j*20, i*20, 20, 20);
                break;
            case 'O':
                p.setPen(background_);
                p.setBrush(background_);
                p.drawRect(j*20, i*20, 20, 20);
                p.setPen(Qt::magenta);
                p.setBrush(Qt::magenta);
                p.drawEllipse(j*20+7, i*20+5, 10, 10);
                break;
            }
        }
    }
}

void Game::drawUI(QPainter &p)
{
    int digitsNum = 10;
    QPixmap digits[] = {
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20),
        QPixmap(20, 20)
    };

    QString files[] = {
        ":/res/zero.jpg",
        ":/res/one.jpg",
        ":/res/two.jpg",
        ":/res/three.jpg",
        ":/res/four.jpg",
        ":/res/five.jpg",
        ":/res/six.jpg",
        ":/res/seven.jpg",
        ":/res/eight.jpg",
        ":/res/nine.jpg",
    };

    for(int i = 0; i < digitsNum; ++i)
        digits[i].load(files[i]);


    /*
    std::vector<QPixmap> digits_vec;

    int points_copy = points_;
    while(points_copy / 10 > 0)
    {
        int digit = points_copy % 10;
        digits_vec.push_back(digits[digit]);
        points_copy/=10;
    }
    */

    p.save();
    p.translate(0, 0);

    int digit;
    digit = points_%10;
    p.drawPixmap(80, 19*20, digits[digit]);
    digit = (points_/10)%10;
    p.drawPixmap(60, 19*20, digits[digit]);
    digit = (points_/100)%10;
    p.drawPixmap(40, 19*20, digits[digit]);
    digit = (points_/1000)%10;
    p.drawPixmap(20, 19*20, digits[digit]);
    digit = (points_/10000)%10;
    p.drawPixmap(0, 19*20, digits[digit]);


    p.setPen(Qt::black);
    p.setBrush(Qt::black);
    p.drawRect(100, 19*20, 20, 20);

    p.setPen(Qt::yellow);
    p.setBrush(Qt::yellow);
    for(int i = 0; i < tries_-1; ++i)
    {
        p.drawEllipse(100 + i * 20 + 7, 19*20 + 5, 10, 10);
    }

    p.end();
}

Game::Game() : QWidget(), player_(280, 180), bonus_(0),
                points_(0), tries_(3)
{
    field_ = new char*[19];
    for(int i = 0; i < 19; ++i)
        field_[i] = new char[21];
    init();
    QPalette pallete;
    pallete.setColor(this->backgroundRole(), Qt::black);
    this->setPalette(pallete);
    setFixedSize(21*20, 20*20);
    timerId_ = startTimer(50);
}

Game::~Game()
{
    for(int i = 0; i < 19; ++i) delete []field_[i];
    delete field_;
}

void Game::keyPressEvent(QKeyEvent* e)
{
    switch (e->key())
    {
        case Qt::Key_Escape: close(); break;
        case Qt::Key_Up:     player_.goUp(); break;
        case Qt::Key_Down:   player_.goDown(); break;
        case Qt::Key_Left:   player_.goLeft(); break;
        case Qt::Key_Right:  player_.goRight(); break;
    }
}

void Game::timerEvent(QTimerEvent* e)
{
    char **old_field;

    size_t f_height = static_cast<size_t>(fieldHeight_);
    size_t f_width = static_cast<size_t>(fieldWidth_);

    old_field = new char*[f_height];
    for(int i = 0; i < fieldHeight_; ++i)
    {
        old_field[i] = new char[f_width];
    }

    copyField(old_field, field_);

    player_.timeout(field_);

    int p_row = player_.y_ / 20;
    int p_col = player_.x_ / 20;

    if(old_field[p_row][p_col] == '.')
    {
        ++points_;
    }

    if (old_field[p_row][p_col] == 'O') bonus_ = 400;

    bonus_ = bonus_ > 0 ? bonus_ - 1 : 0;

    if(bonus_ > 0)
    {
        for(int i = 0; i < monstersNum_; ++i)
        {
            if(!monsters_[i].eaten())
            {
                monsters_[i].setScary(true);
            }
        }
    }
    else
    {
        for(int i = 0; i < monstersNum_; ++i)
        {
            monsters_[i].setScary(false);
            monsters_[i].setEaten(false);
        }
    }

    deleteField(old_field);

    for(int j = 0; j < monstersNum_; ++j)
    {
        monsters_[j].timeout(field_);
        if(monsters_[j].collide())
        {
            if(!monsters_[j].scary())
            {
                tries_--;
                for(int i = 0; i < monstersNum_; ++i)
                {
                    monsters_[i].setPosition(160+20*j, 160);
                    monsters_[i].setScary(false);
                    monsters_[i].setColor(monstersColors_[i]);
                    monsters_[i].setEaten(false);
                }
                player_.setPosition(280, 120);
                if(tries_ < 0) this->close();
            }
            else {
                points_+=200;
                monsters_[j].setPosition(160+20*j, 160);
                monsters_[j].setScary(false);
                monsters_[j].setColor(monstersColors_[j]);
                monsters_[j].setEaten(true);
            }
        }
    }

    update();
}

void Game::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    drawField(p);
    player_.draw(p);
    for(int i = 0; i < monstersNum_; ++i)
        monsters_[i].draw(p);

    drawUI(p);
}
