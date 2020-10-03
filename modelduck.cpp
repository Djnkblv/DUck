#include "modelduck.h"

ModelDuck::ModelDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyRocketPowered();
}
void ModelDuck::display(){
    cout<<"I'm ModelDuck legend"<<endl;
}

