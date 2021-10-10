#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void newSimulation();
    void loadSimulation();
    void loadLastSimulation();
    void recentSimulations();
    void importObjects();
    void exit();

    void undo();
    void redo();
    void cut();
    void copy();
    void paste();
    void preferences();

    void worldValues();
    void addObject();
    void startSimulation();
    void stopSimulation();
    void recordValues();
    void calculateValues();

    void aboutProgrammers();
    void help();
    void versionInfo();

private:
    void createActions();
    void createMenu();
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *simulationMenu;
    QMenu *infoMenu;
    QAction *actNewSimulation;
    QAction *actLoadSimulation;
    QAction *actLoadLastSimulation;
    QAction *actRecentSimulations;
    QAction *actImportObjects;
    QAction *actExit;
    QAction *actUndo;
    QAction *actRedo;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actPreferences;
    QAction *actWorldValues;
    QAction *actAddObject;
    QAction *actStartSimulation;
    QAction *actStopSimulation;
    QAction *actRecordValues;
    QAction *actCalculateValues;
    QAction *actAboutProgrammers;
    QAction *actHelp;
    QAction *actVersionInfo;
    QLabel *infoLabel;
    QLabel *infoLabel2;

};
#endif // MAINWINDOW_H
