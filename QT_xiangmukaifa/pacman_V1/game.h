#ifndef GAME_H
#define GAME_H

#include <QPalette>
#include <QWidget>

#include "player.h"
#include "ghost.h"

class Game : public QWidget
{
private:
    static const int monstersNum_ = 4;
    Qt::GlobalColor monstersColors_[4] = {Qt::red, Qt::yellow, Qt::magenta, Qt::cyan};
    char** field_;
    Player player_;
    Ghost monsters_[monstersNum_];

    static const int fieldWidth_ = 22;
    static const int fieldHeight_= 19;

    const Qt::GlobalColor background_ = Qt::black;

    int timerId_;
    int bonus_;
    int points_;
    int tries_;

    void init();
    void copyField(char** dst, char** src);
    void deleteField(char** field);
    void drawField(QPainter &p);
    void drawUI(QPainter &p);
public:
    Game();
    ~Game();

    int points() const {return points_;}

    void paintEvent(QPaintEvent*);
    void timerEvent(QTimerEvent*);
    void keyPressEvent(QKeyEvent*);
};

#endif // GAME_H
