#include "duck.h"

Duck::Duck()
{

}

void Duck::preformFly(){
    flyBehavior ->fly();
}

void Duck::preformQuack(){
    quackBehavior ->quack();
}

void Duck::swim() {
    cout << "All ducks float!" << endl;
}
