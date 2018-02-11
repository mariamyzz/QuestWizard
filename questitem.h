#ifndef QUESTITEM_H
#define QUESTITEM_H

#include <QObject>

class QuestItem : public QObject
{
    Q_OBJECT
public:
    explicit QuestItem(QObject *parent = 0);

signals:

public slots:
};

#endif // QUESTITEM_H