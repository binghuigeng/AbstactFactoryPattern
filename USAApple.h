#ifndef USAAPPLE_H
#define USAAPPLE_H

#include "AbstractApple.h"

class USAApple : public AbstractApple
{
public:
    USAApple();
    ~USAApple();

    void showName() override;
};

#endif // USAAPPLE_H
