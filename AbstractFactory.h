#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <iostream>

class AbstractApple;
class AbstractBanana;

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractApple* CreateApple() = 0;

    virtual AbstractBanana* CreateBanana() = 0;
};

#endif // ABSTRACTFACTORY_H
