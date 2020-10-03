#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "decoyduck.h"
#include "rubberduck.h"
#include "modelduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new RedheadDuck();
    d1->display();
    d1->preformQuack();
    d1->preformFly();
    cout<<"------------"<<endl;

    Duck *d2 = new MallardDuck();
    d2->display();
    d2->preformQuack();
    d2->preformFly();
    cout<<"------------"<<endl;

    Duck *d3 = new RubberDuck();
    d3->display();
    d3->preformQuack();
    d3->preformFly();
    cout<<"------------"<<endl;

    Duck *d4 = new DecoyDuck();
    d4->display();
    d4->preformQuack();
    d4->preformFly();
    cout<<"------------"<<endl;

    Duck *d5 = new ModelDuck();
    d5->display();
    d5->preformQuack();
    d5->preformFly();
    cout<<"------------"<<endl;



    return a.exec();
}
