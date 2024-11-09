#ifndef ABSTRACTAPPLE_H
#define ABSTRACTAPPLE_H

#include <iostream>

class AbstractApple
{
public:
    AbstractApple();
    virtual ~AbstractApple();

    virtual void showName() = 0;
};

#endif // ABSTRACTAPPLE_H
