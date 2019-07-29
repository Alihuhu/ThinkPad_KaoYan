#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

#include "game.h"

class NewGameScene : public QGraphicsScene
{
private:

public:
    NewGameScene();
    ~NewGameScene();
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game game;
    game.show();
    a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));

    return a.exec();
}
