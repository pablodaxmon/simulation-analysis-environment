#ifndef OBJECTLIST_H
#define OBJECTLIST_H

#include <QObject>

class ObjectList : public QObject
{
    Q_OBJECT
public:
    explicit ObjectList(QObject *parent = nullptr);

signals:

};

#endif // OBJECTLIST_H
