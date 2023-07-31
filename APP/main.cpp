#include "loginandpass.h"
#include "homepage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginAndPass w;
    w.show();

    return a.exec();
}
