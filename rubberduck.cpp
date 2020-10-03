#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    quackBehavior = new Squeak();
    flyBehavior = new FlyNoWay();
}

void RubberDuck::display(){
    cout << "I'm rubber Duck("<<endl;
    }


