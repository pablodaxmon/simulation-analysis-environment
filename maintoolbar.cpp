#include "maintoolbar.h"
#include <QPushButton>
#include <QHBoxLayout>

MainToolBar::MainToolBar(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    QPushButton *button1 = new QPushButton("b1",this);
    button1->setContentsMargins(0,0,0,0);


    QPushButton *button2 = new QPushButton("b2",this);
    button2->setContentsMargins(0,0,0,0);

    QPushButton *button3 = new QPushButton("b3",this);
    button3->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->addStretch(1);
    mainLayout->addWidget(button1, 0, Qt::AlignTop);
    mainLayout->addWidget(button2, 0, Qt::AlignTop);
    mainLayout->addWidget(button3, 0, Qt::AlignTop);
    mainLayout->addStretch(1);




}
