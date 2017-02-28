//74-27-ea-3e-5d-87
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
		cout<<"海信电视机播放中......"<<endl;
	}	
};

class HaierTV : public TV
{
public:
    void play()
	{
		cout<<"海尔电视机播放中......"<<endl;
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
			cout<<"电视机工厂生产海尔电视机！"<<endl;
			return new HaierTV();
		}
		else if(brand=="Hisense")
		{
			cout<<"电视机工厂生产海信电视机！"<<endl;
			return new HisenseTV();
		}
		else
		{
			cout<<"对不起，暂不能生产该品牌电视机！"<<endl;
		}
	}
};


