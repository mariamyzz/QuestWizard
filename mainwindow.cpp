#include "mainwindow.h"

MainWindow::MainWindow()
{
    scene         = new QuestScene();
    scene->setSceneRect(0,0,1280,720);

    view          = new QGraphicsView(scene);
    view->setSceneRect(0,0,1280,720);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(  Qt::ScrollBarAlwaysOff);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{

}
