#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    quackBehavior = new MuteQuack();
    flyBehavior = new FlyNoWay();}
void DecoyDuck::display(){
    cout<<"MADE IN CHINA LEGEND"<<endl;
}

