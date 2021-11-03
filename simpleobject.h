#ifndef SIMPLEOBJECT_H
#define SIMPLEOBJECT_H

#include <QObject>

class SimpleObject : public QObject
{
    Q_OBJECT
public:
    explicit SimpleObject(QObject *parent = nullptr);

signals:

};

#endif // SIMPLEOBJECT_H
