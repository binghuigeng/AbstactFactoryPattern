#include "USAFactory.h"
#include "USAApple.h"
#include "USABanana.h"

USAFactory::USAFactory()
{

}

USAFactory::~USAFactory()
{

}

AbstractApple *USAFactory::CreateApple()
{
    return new USAApple;
}

AbstractBanana *USAFactory::CreateBanana()
{
    return new USABanana;
}
