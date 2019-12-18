#include "conjecturemain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConjectureMain w;
    w.show();
    return a.exec();
}
