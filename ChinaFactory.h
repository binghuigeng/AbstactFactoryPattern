#ifndef CHINAFACTORY_H
#define CHINAFACTORY_H

#include "AbstractFactory.h"

class ChinaFactory : public AbstractFactory
{
public:
    ChinaFactory();
    ~ChinaFactory();

    AbstractApple* CreateApple() override;

    AbstractBanana* CreateBanana() override;
};

#endif // CHINAFACTORY_H
