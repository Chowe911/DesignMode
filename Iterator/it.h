#include <iostream>
#include <string>
#define N 5 
#define X 8
using namespace std;
/*
class Channel
{
private:
    string channel;
public:
    Channel(string channel)
    {
        this->channel=channel;
    }
};
*/
class TVIterator
{
public:
	virtual void setChannel(int i) = 0;
	virtual void next() = 0;
	virtual void previous() = 0;
	virtual bool isLast() = 0;
	virtual string currentChannel() = 0;
    virtual bool isFirst() = 0;
};

class Television
{
public:
	virtual TVIterator* createIterator() = 0;
};

class TCLTelevision : public Television
{
protected:
    static string obj[N];//={"湖南卫视","北京卫视","上海卫视","湖北卫视","黑龙江卫视"};
public: 
    
    TVIterator* createIterator()
	{
		return new TCLIterator();
	}
   
	class TCLIterator : public TVIterator
	{
    private:
        static int currentIndex;
	   	 	
	public:
        
        void next()
		{
			if(currentIndex<N)
			{
				currentIndex++;
			}
		}
		
		void previous()
		{
			if(currentIndex>0)
			{
				currentIndex--;
			}
		}	
		
		void setChannel(int i)
		{
			currentIndex=i;
		}
		
		
		string currentChannel()
		{
			return obj[currentIndex];
		}
		
		bool isLast()
		{
			return currentIndex==N;
		}
	
		bool isFirst()
		{
			return currentIndex==0;
		}
	};
};

class SkyworthTelevision : public Television
{
protected:
    static string obj[X];//={"CCTV-1","CCTV-2","CCTV-3","CCTV-4","CCTV-5","CCTV-6","CCTV-7","CCTV-8"};
public:
    
    TVIterator* createIterator()
	{
		return new SkyworthIterator();
	}

	class SkyworthIterator : public TVIterator
	{
	private:
        static int currentIndex;
	   	 	
	public:
        
        void next()
		{
			if(currentIndex<X)
			{
				currentIndex++;
			}
		}
		
		void previous()
		{
			if(currentIndex>0)
			{
				currentIndex--;
			}
		}	
		
		void setChannel(int i)
		{
			currentIndex=i;
		}
		
		
		string currentChannel()
		{
			return obj[currentIndex];
		}
		
		bool isLast()
		{
			return currentIndex==X;
		}
		
		bool isFirst()
		{
			return currentIndex==0;
		}
	};
};

string SkyworthTelevision::obj[X]={"CCTV-1","CCTV-2","CCTV-3","CCTV-4","CCTV-5","CCTV-6","CCTV-7","CCTV-8"};
string TCLTelevision::obj[N]={"湖南卫视","北京卫视","上海卫视","湖北卫视","黑龙江卫视"};
int SkyworthTelevision::SkyworthIterator::currentIndex=0;
int TCLTelevision::TCLIterator::currentIndex=0;
