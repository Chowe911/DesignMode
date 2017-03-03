#include <iostream>
#include <string>
using namespace std;

class Fan
{
public:
    void on()
	{
		cout<<"风扇打开！"<<endl;
	}
	
	void off()
	{
		cout<<"风扇关闭！"<<endl;	
	}
	
};

class AirConditioner
{
public:
    void on()
	{
		cout<<"空调打开！"<<endl;
	}
	
	void off()
	{
		cout<<"空调关闭！"<<endl;
	}
};

class Television
{
public:
    void on()
	{
		cout<<"电视机打开！"<<endl;
	}
	
	void off()
	{
		cout<<"电视机关闭！"<<endl;
	}
};

class Light
{
private:
    string position;
	
public:
    Light(string position)
	{
		this->position=position;	
	}
	
	void on()
	{
		cout<<this->position + "灯打开！"<<endl;
	}
	
	void off()
	{
		cout<<this->position + "灯关闭！"<<endl;
	}
};

class GeneralSwitchFacade {
private:
    Light* lights[4];
	Fan* fan;
	AirConditioner* ac;
	Television* tv;
	
public:
    GeneralSwitchFacade()
	{
		lights[0]=new Light("左前");
		lights[1]=new Light("右前");
		lights[2]=new Light("左后");
		lights[3]=new Light("右后");
		fan=new Fan();
		ac=new AirConditioner();
		tv=new Television();
	}
	
	void on()
	{
		lights[0]->on();
		lights[1]->on();
		lights[2]->on();
		lights[3]->on();
		fan->on();
		ac->on();
		tv->on();
	} 
		
	void off()
	{
		lights[0]->off();
		lights[1]->off();
		lights[2]->off();
		lights[3]->off();
		fan->off();
		ac->off();
		tv->off();		
	}   
};
