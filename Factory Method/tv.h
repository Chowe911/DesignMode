#include <iostream>
#include <string>
using namespace std;

class TV
{
public:
    virtual void play() = 0;
};

class TVFactory
{
public:
    virtual TV* produceTV() = 0;
};

class HaierTV : public TV
{
public:
	void play()
	{
		cout<<"海尔电视机播放中......"<<endl;
	}
};

class HisenseTV : public TV
{
public:
	void play()
	{
		cout<<"海信电视机播放中......"<<endl;
	}	
};

class HaierTVFactory : public TVFactory
{
public:
	TV* produceTV()
    {
    	cout<<"海尔电视机工厂生产海尔电视机。"<<endl;
    	return new HaierTV();
    }
};

class HisenseTVFactory : public TVFactory
{
public:
	TV* produceTV()
    {
    	cout<<"海信电视机工厂生产海信电视机。"<<endl;
    	return new HisenseTV();
    }
};

