#include "myclass.h"
#include <QCoreApplication>

int main (int argc, char **argv) {

    QCoreApplication app(argc, argv);

    MyClass obj;
    obj.isValid();
    return 0;
}
