#ifndef QUESTEVENT_H
#define QUESTEVENT_H

#include <QObject>

class QuestEvent : public QObject
{
    Q_OBJECT
public:
    explicit QuestEvent(QObject *parent = 0);

signals:

public slots:
};

#endif // QUESTEVENT_H