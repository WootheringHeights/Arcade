#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <map.h>
#include <QList>

namespace Ui {
class PlayWindow;
}

class PlayWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PlayWindow(QWidget *parent = 0);
    void createGameObject(int x, int y, QString type);
    void loadMap(QString path);
    void drawMap();
    ~PlayWindow();

private:
    Ui::PlayWindow *ui;
    QGraphicsScene *scene;
    int width = 601;
    int height = 371;
    QString testMap = "G:/Development/build-Game-Desktop_Qt_5_10_1_MinGW_32bit-Debug/map1.csv";
    QList<QGraphicsRectItem*> markers;
    Map *map;
};

#endif // PLAYWINDOW_H