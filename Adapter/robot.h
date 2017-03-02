#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
    virtual void cry() = 0;
	virtual void move() = 0;
};

class Dog
{
public:
    void wang()
	{
		cout<<"狗汪汪叫！"<<endl;
	}
	
	void run()
	{
		cout<<"狗快快跑！"<<endl;
	}
};

class DogAdapter : public Dog , public Robot
{
public:
    void cry()
	{
		cout<<"机器人模仿："<<endl;
		this->wang();
	}
	
	void move()
	{
		cout<<"机器人模仿："<<endl;
		this->run();
	}
};

class Bird
{
public:
    void tweedle()
	{
		cout<<"鸟儿叽叽叫！"<<endl;
	}
	
	void fly()
	{
		cout<<"鸟儿快快飞！"<<endl;
	}
};

class BirdAdapter : public Bird , public Robot
{
public:
    void cry()
	{
		cout<<"机器人模仿："<<endl;
		this->tweedle();
	}
	
	void move()
	{
		cout<<"机器人模仿："<<endl;
		this->fly();
	}
};