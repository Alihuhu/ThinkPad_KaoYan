#include <QPoint>
#include "ghost.h"

Ghost::DIRECTION Ghost::getDirection()
{
    if(dx_ > 0)
        return(RIGHT);
    else if (dx_ < 0)
        return(LEFT);
    else if (dy_ > 0)
        return(DOWN);
    else if(dy_ < 0)
        return(UP);
}

Ghost::DIRECTION Ghost::changeDirection(DIRECTION dir)
{
    switch (dir)
    {
    case UP:
        return(DOWN);
    case DOWN:
        return(UP);
    case LEFT:
        return(RIGHT);
    case RIGHT:
        return(LEFT);
    }
}

Ghost::DIRECTION Ghost::searchPlayer(char** field)
{
    int n = 0;
    int row = y_ / 20;
    int col = x_ / 20;

    bool up = false, down= false, left= false, right= false;

    if(x_ % 20 == 0 && y_ % 20 == 0)
    {
        if(row > 0 && field[row-1][col] != '#' && !(dx_ == 0 && dy_ == 5))
        {
            up = true;
        }
        if(col > 0 && field[row][col-1] != '#' && !(dx_ == 5 && dy_ == 0))
        {
            left = true;
        }
        if(row < 18 && field[row+1][col] != '#' && !(dx_ == 0 && dy_ == -5))
        {
            down = true;
        }
        if(col < 21 && field[row][col+1] != '#' && !(dx_ == -5 && dy_ == 0))
        {
            right = true;
        }
    }

    for(int i = 1; i <= viewRange_; ++i)
    {
        if(up)
        {
            if((row - i) < 0 || field[row-i][col] == '#')
            {
                up = false ;
            }
            else if(field[row-i][col] == 'p') return(UP);

        }
        if(down)
        {
            if(row + i > 18 || field[row+i][col] == '#')
            {
                down = false;
            }
            else if(field[row+i][col] == 'p') return DOWN;
        }
        if(left)
        {
            if(col - i < 0 || field[row][col-1] == '#')
            {
                left = false;
            }
            else if(field[row][col-i] == 'p') return(LEFT);

        }
        if(right)
        {
            if(col + i > 21 || field[row][col+i] == '#')
            {
                right = false;
            }
            else if(field[row][col+i] == 'p') return(RIGHT);
        }
    }
    return NO;
}

bool Ghost::validDirection(char** field, DIRECTION dir)
{
    if(x_ % 20 == 0 && y_ % 20 ==0)
    {
        int row = y_ / 20;
        int col = x_ / 20;

        switch (dir)
        {
        case UP:
            if(row > 0 && field[row-1][col] != '#') return(true);
            else return(false);
        case DOWN:
            if(row < 18 && field[row+1][col] != '#') return(true);
            else return(false);
        case LEFT:
            if(col > 0 && field[row][col-1] != '#') return(true);
            else return(false);
        case RIGHT:
            if(col < 21 && field[row][col+1] != '#') return(true);
            else return(false);
        }
    }
    return(false);
}

void Ghost::moveRandom(char** field)
{
    if(x_ % 20 == 0 && y_ % 20 ==0)
    {
        int variant[4][2];
        int n = 0;
        int row = y_ / 20;
        int col = x_ / 20;
        if(row > 0 && field[row-1][col] != '#' && !(dx_ == 0 && dy_ == 5) &&
                direction_ != DOWN)
        {
            variant[n][0] = 0;
            variant[n++][1] = scary_ ? -scarySpeed_ : -defaultSpeed_;
        }
        if(col > 0 && field[row][col-1] != '#' && !(dx_ == 5 && dy_ == 0) &&
                direction_ != RIGHT)
        {
            variant[n][0] = scary_ ? -scarySpeed_ : -defaultSpeed_;
            variant[n++][1] = 0;
        }
        if(row < 18 && field[row+1][col] != '#' && !(dx_ == 0 && dy_ == -5) &&
                direction_ != UP)
        {
            variant[n][0] = 0;
            variant[n++][1] = scary_ ? scarySpeed_ : defaultSpeed_;
        }
        if(col < 21 && field[row][col+1] != '#' && !(dx_ == -5 && dy_ == 0) &&
                direction_ != LEFT)
        {
            variant[n][0] = scary_ ? scarySpeed_ : defaultSpeed_;
            variant[n++][1] = 0;
        }
        if( n == 0)
        {
            dx_ = -dx_;
            dy_ = -dy_;
        }
        else
        {
            int var = rand() % n;
            dx_ = variant[var][0];
            dy_ = variant[var][1];
        }
    }

    direction_ = getDirection();

    x_+=dx_;
    y_+=dy_;
    int col = x_/20;
    if(col >= 21)
    {
        dx_ = -dx_;
        x_+=dx_;
    }
    if(x_ < 0)
    {
        dx_ = -dx_;
        x_+=dx_;
    }
}

void Ghost::moveInDirection(DIRECTION dir)
{
    switch (dir)
    {
    case UP:
        dx_ = 0;
        dy_ = scary_ ? -scarySpeed_ : -defaultSpeed_;
        break;
    case DOWN:
        dx_ = 0;
        dy_ = scary_ ? scarySpeed_ : defaultSpeed_;
        break;
    case LEFT:
        dx_ = scary_ ? -scarySpeed_ : -defaultSpeed_;
        dy_ = 0;
        break;
    case RIGHT:
        dx_ = scary_ ? scarySpeed_ : defaultSpeed_;
        dy_ = 0;
        break;
    default:
        break;
    }
    x_ += dx_;
    y_ += dy_;
    direction_ = getDirection();
}

Ghost::Ghost() : Actor(0, 0), sprite_(20, 20), moveTimer_(100), scary_(false),
    color_(Qt::red), collide_(false), eaten_(false)
{
    dx_ = (rand() % 3-1) * 5;
    dy_ = (rand() % 3-1) * 5;
    direction_ = getDirection();
    sprite_.fill(Qt::black);
    QPainter p(&sprite_);
    p.setPen(color_);
    p.setBrush(color_);
    static const QPoint points[18] =
    {
        QPoint(2, 18),
        QPoint(2, 14),
        QPoint(2, 10),
        QPoint(4, 6),
        QPoint(6, 4),
        QPoint(10, 2),
        QPoint(14, 4),
        QPoint(16, 6),
        QPoint(18, 10),
        QPoint(18, 14),
        QPoint(18, 18),
        QPoint(16, 16),
        QPoint(14, 18),
        QPoint(12, 16),
        QPoint(10, 18),
        QPoint(8, 16),
        QPoint(6, 18),
        QPoint(4, 16)
    };
    p.setPen(color_);
    p.setBrush(color_);
    p.drawPolygon(points, 18);
    p.setPen(Qt::green);
    p.drawEllipse(6, 5, 2, 2);
    p.drawEllipse(12, 5, 2, 2);
    p.end();
}

void Ghost::draw(QPainter& p)
{
    sprite_.fill(Qt::black);
    Qt::GlobalColor color = scary_ ? Qt::darkBlue : color_;
    QPainter q(&sprite_);
    q.setPen(color);
    q.setBrush(color);
    static const QPoint points[18] =
    {
        QPoint(2, 18),
        QPoint(2, 14),
        QPoint(2, 10),
        QPoint(4, 6),
        QPoint(6, 4),
        QPoint(10, 2),
        QPoint(14, 4),
        QPoint(16, 6),
        QPoint(18, 10),
        QPoint(18, 14),
        QPoint(18, 18),
        QPoint(16, 16),
        QPoint(14, 18),
        QPoint(12, 16),
        QPoint(10, 18),
        QPoint(8, 16),
        QPoint(6, 18),
        QPoint(4, 16)
    };
    q.setPen(color);
    q.setBrush(color);
    q.drawPolygon(points, 18);
    q.setPen(Qt::white);
    q.drawEllipse(6, 5, 2, 2);
    q.drawEllipse(12, 5, 2, 2);
    q.end();

    p.save();
    p.translate(x_ + 10, y_ + 10);
    p.drawPixmap(-10, -10, sprite_);
    p.restore();
}

void Ghost::timeout(char** field)
{
    DIRECTION dir = searchPlayer(field);

    if(scary_)
    {
        dir = changeDirection(dir);
    }

    if(dir == NO)
        moveRandom(field);
    else
    {
        if(validDirection(field, dir))
        {
            moveInDirection(dir);
        }
        else
        {
            moveRandom(field);
        }
    }

    int x1 = (x_ + dx_) / 20;
    int y1 = (y_ + dy_) / 20;
    int x2 = (x_ + dx_ + 19) / 20;
    int y2 = y1;
    int y3 = (y_ + dy_ + 19) / 20;
    int x3 = x2;
    int y4 = y3;
    int x4 = x1;
    if (!(field[y1][x1] != 'p' && field[y2][x2] != 'p'
            && field[y3][x3] != 'p' && field[y4][x4] != 'p'
            ))
    {
            collide_ = true;   
    }
    else collide_ = false;
}
