#ifndef OBJECTSTATE_H
#define OBJECTSTATE_H

#include <QObject>

class ObjectState : public QObject
{
    Q_OBJECT
public:
    explicit ObjectState(QObject *parent = nullptr);

signals:

};

#endif // OBJECTSTATE_H
