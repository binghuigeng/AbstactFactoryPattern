#include <iostream>
#include "ChinaFactory.h"
#include "AbstractApple.h"
#include "AbstractBanana.h"

using namespace std;

int main()
{
    AbstractFactory* factory = new ChinaFactory;
    AbstractApple* apple = factory->CreateApple();
    AbstractBanana* Banana = factory->CreateBanana();

    apple->showName();
    Banana->showName();

    delete apple;
    apple = nullptr;
    delete Banana;
    Banana = nullptr;
    delete factory;
    factory = nullptr;

    return 0;
}
