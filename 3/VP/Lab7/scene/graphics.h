#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class graphics : public QGraphicsScene
{
    Q_OBJECT
public:
    graphics(QObject *parent = 0);
private:
    int speed;
    QPointF d;
    QGraphicsItem* circle1;
    QGraphicsItem* circle2;
    QGraphicsPixmapItem* car;
    QGraphicsPixmapItem* flashlight;
    QGraphicsPixmapItem* ball;
    QGraphicsItem* upline;
    QGraphicsItem* downline;
    QGraphicsItem* leftline;
    QGraphicsItem* rightline;
    QGraphicsItem* itemCollidesWith(QGraphicsItem *item);
private slots:
    void ball_move();

};
#endif // GRAPHICS_H
