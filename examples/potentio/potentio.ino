/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
电位器，调节电阻值比例

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetPotentiometer.h>

WidgetPotentiometer potent;

void setup() 
{
// put your setup code here, to run once.
    potent.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
    SerialUSB.println(potent.getRate()); //获取比例
    delay(2000);
}
