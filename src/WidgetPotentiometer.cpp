#include "WidgetPotentiometer.h"


WidgetPotentiometer::WidgetPotentiometer(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataRateTopic,0,sizeof(pDataRateTopic));
    sprintf(pDataRateTopic,"channel/potentiometer_%d/cmd/rate",_Item);
}

WidgetPotentiometer::~WidgetPotentiometer()
{

}

void WidgetPotentiometer::begin(void (*UserCallBack)(void))
{
    IntoRobot.subscribe(pDataRateTopic,NULL,this);
}


uint8_t WidgetPotentiometer::getRate(void)
{
    return _rateVal;
}


void WidgetPotentiometer::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
    _rateVal = atoi((char *)payload);
}

