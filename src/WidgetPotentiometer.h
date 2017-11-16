#ifndef WIDGET_POTENTIOMETER_H_
#define WIDGET_POTENTIOMETER_H_

#include "application.h"

class WidgetPotentiometer : public WidgetBaseClass
{
    public:
        WidgetPotentiometer(uint8_t ucItem = 0);
        ~WidgetPotentiometer();
        void begin(void (*UserCallBack)(void) = NULL);
        uint8_t getRate(void);

    private:
        char pDataRateTopic[64];
        uint8_t _Item = 0;
        uint8_t _rateVal;
        
        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
