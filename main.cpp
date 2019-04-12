#include <iostream>

#include <QApplication>

using namespace std;

#include <QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget windows;
    windows.setFixedSize(200, 200);
    auto *vlay = new QVBoxLayout(&windows);
    QPushButton qPushButton("quit");
    qPushButton.setFixedSize(100, 50);
    QObject::connect(&qPushButton, SIGNAL(clicked()), &app, SLOT(quit()));
    vlay->addWidget(&qPushButton);
    windows.setLayout(vlay);
    windows.show();
    return app.exec();
}

