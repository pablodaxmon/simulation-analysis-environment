#include "mainprogram.h"


MainProgram::MainProgram()
{
    MainWindow window;
    window.setWindowState(Qt::WindowMaximized);
    window.show();

    ControlActions *controlActions = new ControlActions();
    CoreSimulator *coreSimulator = new CoreSimulator();
    Environment *environment = new Environment();
    ObjectList *objectList = new ObjectList();
    ViewActions *viewActions = new ViewActions();
    ViewControl *viewControl = new ViewControl();
    ViewProperties *viewProperties = new ViewProperties();
    ViewSimulation *viewSimulation = new ViewSimulation();
    ViewToolbar *viewToolbar = new ViewToolbar();

}
