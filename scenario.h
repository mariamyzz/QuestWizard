#ifndef SCENARIO_H
#define SCENARIO_H

#include <QObject>

class Scenario : public QObject
{
    Q_OBJECT
public:
    explicit Scenario(QObject *parent = 0);

signals:

public slots:
};

#endif // SCENARIO_H