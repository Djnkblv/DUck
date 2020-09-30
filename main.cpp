#include <QCoreApplication>
#include "duck.h"
#include "mallarduck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "decoyduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d6 = new mallarDuck();
    d6->display();
    d6->quack();
    d6->fly();

    return a.exec();
}
