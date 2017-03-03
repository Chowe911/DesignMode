#include <iostream>
#include <string>
using namespace std;

class Fan
{
public:
    void on()
	{
		cout<<"���ȴ򿪣�"<<endl;
	}
	
	void off()
	{
		cout<<"���ȹرգ�"<<endl;	
	}
	
};

class AirConditioner
{
public:
    void on()
	{
		cout<<"�յ��򿪣�"<<endl;
	}
	
	void off()
	{
		cout<<"�յ��رգ�"<<endl;
	}
};

class Television
{
public:
    void on()
	{
		cout<<"���ӻ��򿪣�"<<endl;
	}
	
	void off()
	{
		cout<<"���ӻ��رգ�"<<endl;
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
		cout<<this->position + "�ƴ򿪣�"<<endl;
	}
	
	void off()
	{
		cout<<this->position + "�ƹرգ�"<<endl;
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
		lights[0]=new Light("��ǰ");
		lights[1]=new Light("��ǰ");
		lights[2]=new Light("���");
		lights[3]=new Light("�Һ�");
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
