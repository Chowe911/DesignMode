#include <iostream>
#include <string>
#include <vector>
using namespace std;

class myObserver
{
public:
	virtual void response() = 0;  //抽象响应方法
};

//template<class T>
class MySubject
{
public:
	vector<myObserver*> observers;//= new ArrayList();
	
	//注册方法

	void attach(myObserver* observer)
	{
		observers.push_back(observer);
	} 
	
	//注销方法
	void detach(myObserver* observer)
	{
		//observers.erase(observer);
		for (vector<myObserver*>::iterator it = observers.begin(); it != observers.end(); it++)
		{
			if (observer == *it)
			{
				observers.erase(it);
				return;
			}
		}
	}
	

	virtual void cry() = 0; //抽象通知方法
};



class Dog : public myObserver
{
public:
    void response()
	{
		cout<<"狗跟着叫！"<<endl;
	}	
};

class Mouse : public myObserver
{
public:
    void response()
	{
		cout<<"老鼠努力逃跑！"<<endl;
	}
};

class Pig : public myObserver
{
public:
    void response()
	{
		cout<<"猪没有反应！"<<endl;
	}	
};

class Cat : public MySubject
{
public:
	void cry()
	{
		cout << "猫叫！" << endl;
		cout << "----------------------------" << endl;

		for (myObserver* obs : observers)
		{
			obs->response();
		}

	}
};