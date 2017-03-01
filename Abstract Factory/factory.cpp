#include "factory.h"

int main(int argc,char* argv[])
{
         try
         {
         	EFactory* factory;
         	Television* tv;
         	AirConditioner* ac;
         	factory=new TCLFactory();//(EFactory)XMLUtil.getBean();
         	tv=factory->produceTelevision();
         	tv->play();
         	ac=factory->produceAirConditioner();
         	ac->changeTemperature();
         }
         catch(...)
         {
         	cout<<"出错啦。。。"<<endl;
         }
	}