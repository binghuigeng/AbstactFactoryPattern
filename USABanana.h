#ifndef USABANANA_H
#define USABANANA_H

#include "AbstractBanana.h"

class USABanana : public AbstractBanana
{
public:
    USABanana();
    ~USABanana();

    void showName() override;
};

#endif // USABANANA_H
