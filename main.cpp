#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QtWidgets/QVBoxLayout>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QWidget fenetre;
    fenetre.setFixedSize(150, 200);

    QLineEdit open(&fenetre);
    QLineEdit high(&fenetre);
    QLineEdit low(&fenetre);
    QLineEdit close(&fenetre);


    QLabel openl("Open", &fenetre);
    QLabel highl("High", &fenetre);
    QLabel lowl("Low", &fenetre);
    QLabel closel("Close", &fenetre);

    QPushButton ok("ok", &fenetre);


    open.setFixedWidth(60);
    high.setFixedWidth(60);
    low.setFixedWidth(60);
    close.setFixedWidth(60);

    openl.move(10, 10);
    highl.move(10, 40);
    lowl.move(10, 70);
    closel.move(10, 100);

    open.move(50, 10);
    high.move(50, 40);
    low.move(50, 70);
    close.move(50, 100);

    ok.setFixedWidth(100);
    ok.move(10, 130);

    QHBoxLayout copen;
    copen.addWidget(&openl);
    copen.addWidget(&open);
    QHBoxLayout chigh;
    chigh.addWidget(&highl);
    chigh.addWidget(&high);
    QHBoxLayout clow;
    clow.addWidget(&lowl);
    clow.addWidget(&low);
    QHBoxLayout cclose;
    cclose.addWidget(&closel);
    cclose.addWidget(&close);

    QVBoxLayout couche;
    couche.addLayout(&copen);
    couche.addLayout(&chigh);
    couche.addLayout(&clow);
    couche.addLayout(&cclose);
    couche.addWidget(&ok);
    fenetre.setLayout(&couche);

    fenetre.show();
    return app.exec();
}
