#include "graphics.h"

#include <QGraphicsItem>
#include <QTimer>

graphics::graphics(QObject *parent) : QGraphicsScene(parent)
{
    speed = 1;
    d.setX(5);
    d.setY(3);

    upline = addLine(QLineF(0, 0, 800, 0), QPen(Qt::red, 10));
    upline->setData(0, "up");

    leftline = addLine(QLineF(0, 0, 0, 600), QPen(Qt::red, 10));
    leftline->setData(0, "left");

    rightline = addLine(QLineF(800, 0, 800, 600), QPen(Qt::red, 10));
    rightline->setData(0, "right");

    downline = addLine(QLineF(0, 600, 800, 600), QPen(Qt::red, 10));
    downline->setData(0, "down");

    ball = addPixmap(QPixmap("ball-6x6.png"));

    car = addPixmap(QPixmap("images (1).png"));
    car->setFlag(QGraphicsItem::ItemIsMovable);
    car->setPos(400, 300);
    car->setData(0, "car");

    flashlight = addPixmap(QPixmap("img2.png"));
    flashlight->setFlag(QGraphicsItem::ItemIsMovable);
    flashlight->setPos(450, 250);
    flashlight->setData(0, "car");

    circle1 = addEllipse(120.0, 120.0, 50.0, 50.0, QPen(Qt::black) , QBrush(Qt::black));
    circle1->setPos(300, 300);
    circle1->setFlag(QGraphicsItem::ItemIsMovable);
    circle1->setData(0, "car");

    circle2 = addEllipse(120.0, 120.0, 50.0, 50.0, QPen(Qt::black) , QBrush(Qt::black));
    circle2->setFlag(QGraphicsItem::ItemIsMovable);
    circle2->setPos(300, 300);
    circle2->setData(0, "car");

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ball_move()));
    timer->start(10);

    QTransform transform = ball->transform();
    transform.scale(0.5, 0.5);
    ball->setTransform(transform);
    ball->setPos(50, 50);
}

void graphics::ball_move()
{
    QTransform transform = ball->transform();
    transform.translate(speed * d.x(), speed * d.y());
    ball->setTransform(transform);

    QGraphicsItem* obstacle = itemCollidesWith(ball);
    if(obstacle)
    {
        if(obstacle->data(0) == "down" || obstacle->data(0) == "up")
        {
            d.setY(-1 * d.y());
        }
        else if(obstacle->data(0) == "left" || obstacle->data(0) == "right")
        {
            d.setX(-1 * d.x());
        }
        else
        {
            d.setX(d.y());
            d.setY(d.x());
            d.setX(-1 * d.x());
            d.setY(-1 * d.y());
        }
    }
}

QGraphicsItem* graphics::itemCollidesWith(QGraphicsItem *item)
{
    QList<QGraphicsItem*> collisions = collidingItems(item);
    foreach (QGraphicsItem* it, collisions)
    {
        if(it == item)
        {
            continue;
        }
        return it;
    }
    return NULL;
}
