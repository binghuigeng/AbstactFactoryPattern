#ifndef CHINABANANA_H
#define CHINABANANA_H

#include "AbstractBanana.h"

class ChinaBanana : public AbstractBanana
{
public:
    ChinaBanana();
    ~ChinaBanana();

    void showName() override;
};

#endif // CHINABANANA_H
