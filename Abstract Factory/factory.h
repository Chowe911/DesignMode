#include <iostream>
#include <string>
using namespace std;

class Television
{
public:
    virtual void play() = 0;
};

class AirConditioner
{
public:
    virtual void changeTemperature() = 0;
};

class EFactory
{
public:
    virtual Television* produceTelevision() = 0;
    virtual AirConditioner* produceAirConditioner() = 0;
};

class HaierTelevision : public Television
{
public:
	void play()
	{
		cout<<"海尔电视机播放中......"<<endl;
	}
};

class HairAirConditioner : public AirConditioner
{
public:
    void changeTemperature()
	{
		cout<<"海尔空调温度改变中......"<<endl;
	}
};

class TCLAirConditioner : public AirConditioner
{
public:
    void changeTemperature()
	{
		cout<<"TCL空调温度改变中......"<<endl;
	}
};

class TCLTelevision : public Television
{
public:
    void play()
	{
		cout<<"TCL电视机播放中......"<<endl;
	}
};

class HaierFactory : public EFactory
{
public:
    Television* produceTelevision()
	{
		return new HaierTelevision();
	}
	
	AirConditioner* produceAirConditioner()
	{
		return new HairAirConditioner();
	}
};

class TCLFactory : public EFactory
{
public:
    Television* produceTelevision()
	{
		return new TCLTelevision();
	}
	
	AirConditioner* produceAirConditioner()
	{
		return new TCLAirConditioner();
	}
};

