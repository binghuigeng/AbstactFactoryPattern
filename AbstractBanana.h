#ifndef ABSTRACTBANANA_H
#define ABSTRACTBANANA_H

#include <iostream>

class AbstractBanana
{
public:
    AbstractBanana();
    virtual ~AbstractBanana();

    virtual void showName() = 0;
};

#endif // ABSTRACTBANANA_H
