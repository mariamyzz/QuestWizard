#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <questscene.h>


class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QuestScene    *scene;
    QGraphicsView *view;

    QMediaPlaylist *playlist;
    QMediaPlayer   *mediaPlayer;
    QMediaPlaylist *playlistSound;
    QMediaPlayer   *mediaPlayerSound;
public:
    MainWindow();
    ~MainWindow();
};

#endif // MAINWINDOW_H
