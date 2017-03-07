#include <iostream>
#include <string>
#include <vector>
using namespace std;

class myObserver
{
public:
	virtual void response() = 0;  //������Ӧ����
};

//template<class T>
class MySubject
{
public:
	vector<myObserver*> observers;//= new ArrayList();
	
	//ע�᷽��

	void attach(myObserver* observer)
	{
		observers.push_back(observer);
	} 
	
	//ע������
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
	

	virtual void cry() = 0; //����֪ͨ����
};



class Dog : public myObserver
{
public:
    void response()
	{
		cout<<"�����ŽУ�"<<endl;
	}	
};

class Mouse : public myObserver
{
public:
    void response()
	{
		cout<<"����Ŭ�����ܣ�"<<endl;
	}
};

class Pig : public myObserver
{
public:
    void response()
	{
		cout<<"��û�з�Ӧ��"<<endl;
	}	
};

class Cat : public MySubject
{
public:
	void cry()
	{
		cout << "è�У�" << endl;
		cout << "----------------------------" << endl;

		for (myObserver* obs : observers)
		{
			obs->response();
		}

	}
};