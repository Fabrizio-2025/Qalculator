#include "qcalwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCalWindow w;
    w.show();
    return a.exec();
}
