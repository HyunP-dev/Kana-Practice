#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include "MainWidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow mainWindow = QMainWindow();

    QWidget *mainWidget = new MainWidget();


    mainWindow.setCentralWidget(mainWidget);
    mainWindow.setFixedSize(300, 200);
    mainWindow.show();
    return QApplication::exec();
}
