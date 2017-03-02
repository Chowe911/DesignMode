#include <iostream>
#include <string>
using namespace std;

class IdentityCardNo
{
private:
    static IdentityCardNo* instance;
    string no;
	
	IdentityCardNo()
	{	
       no="14031214";
	}
    
public:
    static IdentityCardNo* getInstance()
	{
		if(instance==NULL)
		{
			cout<<"第一次办理身份证，分配新号码！"<<endl;
		    instance=new IdentityCardNo();
        }   
		else
		{
			cout<<"重复办理身份证，获取旧号码！"<<endl;  
		}
		return instance;
	}
	
	string getIdentityCardNo()
	{
		return this->no;
	}
	
};

IdentityCardNo* IdentityCardNo::instance=NULL;
