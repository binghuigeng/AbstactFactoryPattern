#include "ChinaFactory.h"
#include "ChinaApple.h"
#include "ChinaBanana.h"

ChinaFactory::ChinaFactory()
{

}

ChinaFactory::~ChinaFactory()
{

}

AbstractApple *ChinaFactory::CreateApple()
{
    return new ChinaApple;
}

AbstractBanana *ChinaFactory::CreateBanana()
{
    return new ChinaBanana;
}
