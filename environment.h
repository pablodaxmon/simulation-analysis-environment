#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <QObject>

class Environment : public QObject
{
    Q_OBJECT
public:
    explicit Environment(QObject *parent = nullptr);

signals:

};

#endif // ENVIRONMENT_H
