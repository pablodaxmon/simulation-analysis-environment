#ifndef CORESIMULATOR_H
#define CORESIMULATOR_H

#include <QObject>

class CoreSimulator : public QObject
{
    Q_OBJECT
public:
    explicit CoreSimulator(QObject *parent = nullptr);

signals:

};

#endif // CORESIMULATOR_H
