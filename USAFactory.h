#ifndef USAFACTORY_H
#define USAFACTORY_H

#include "AbstractFactory.h"

class USAFactory : public AbstractFactory
{
public:
    USAFactory();
    ~USAFactory();

    AbstractApple* CreateApple() override;

    AbstractBanana* CreateBanana() override;
};

#endif // USAFACTORY_H
