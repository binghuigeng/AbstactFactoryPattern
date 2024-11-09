#ifndef CHINAAPPLE_H
#define CHINAAPPLE_H

#include "AbstractApple.h"

class ChinaApple : public AbstractApple
{
public:
    ChinaApple();
    ~ChinaApple();

    void showName() override;
};

#endif // CHINAAPPLE_H
