#include "splittermain.h"
#include <QPushButton>
#include <QSplitter>
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>

SplitterMain::SplitterMain(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *container = new QHBoxLayout(this);
    container->setContentsMargins(0,0,0,0);
    QSplitter *mainSpliter = new QSplitter(Qt::Horizontal,this);

    QSplitter *middleSplitter = new QSplitter(Qt::Vertical, this);

    middleSplitter->setHandleWidth(0);
    QSplitter *rightSplitter = new QSplitter(Qt::Vertical, this);
    rightSplitter->setHandleWidth(0);

    QPushButton *b1 = new QPushButton("b1", this);
    b1->setStyleSheet("border: 1px solid black;");
    QSizePolicy sp1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    b1->setSizePolicy(sp1);
    b1->setStyleSheet("background-color: white;");

    QGraphicsScene * scene = new QGraphicsScene(this);
    scene->addText("Hola, mundo!");
    QGraphicsView * graphicsView = new QGraphicsView(scene);
    graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
    graphicsView->setOptimizationFlags(QGraphicsView::DontSavePainterState);
    graphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);


    QPushButton *b2a = new QPushButton("b2a", this);
    QSizePolicy sp3(QSizePolicy::Expanding, QSizePolicy::Expanding);
    b2a->setSizePolicy(sp3);
    b2a->setStyleSheet("background-color: white;");

    QPushButton *b3 = new QPushButton("b3", this);
    QSizePolicy sp4(QSizePolicy::Expanding, QSizePolicy::Expanding);
    b3->setSizePolicy(sp4);
    b3->setStyleSheet("background-color: white;");

    QPushButton *b3a = new QPushButton("b3a", this);
    QSizePolicy sp5(QSizePolicy::Expanding, QSizePolicy::Expanding);
    b3a->setSizePolicy(sp5);
    b3a->setStyleSheet("background-color: white;");

    middleSplitter->addWidget(graphicsView);
    middleSplitter->addWidget(b2a);
    middleSplitter->setStretchFactor(0,5);
    middleSplitter->setStretchFactor(1,1);

    rightSplitter->addWidget(b3);
    rightSplitter->addWidget(b3a);

    mainSpliter->addWidget(b1);
    mainSpliter->addWidget(middleSplitter);
    mainSpliter->addWidget(rightSplitter);

    mainSpliter->setStretchFactor(0,1);
    mainSpliter->setStretchFactor(1,5);
    mainSpliter->setStretchFactor(2,1);

    container->addWidget(mainSpliter);
    mainSpliter->setHandleWidth(0);



}
