
#include<string>
#include<iostream>
using namespace std;

class TV
{
public:
    virtual void play() = 0;
};

class HisenseTV : public TV
{
public:
    void play()
	{
		cout<<"���ŵ��ӻ�������......"<<endl;
	}	
};

class HaierTV : public TV
{
public:
    void play()
	{
		cout<<"�������ӻ�������......"<<endl;
	}
};

class TVFactory
{
public:
    static TV* produceTV(string brand)
	{
        TV *tv;
		if(brand=="Haier")
		{
			cout<<"���ӻ����������������ӻ���"<<endl;
			return new HaierTV();
		}
		else if(brand=="Hisense")
		{
			cout<<"���ӻ������������ŵ��ӻ���"<<endl;
			return new HisenseTV();
		}
		else
		{
			cout<<"�Բ������ݲ���������Ʒ�Ƶ��ӻ���"<<endl;
		}
	}
};


