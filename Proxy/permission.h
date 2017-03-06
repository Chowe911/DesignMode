#include <iostream>
#include <string>
using namespace std;

class AbstractPermission
{
public:
    virtual void modifyUserInfo() = 0;
	virtual void viewNote() = 0;
	virtual void publishNote() = 0;
	virtual void modifyNote() = 0;
	virtual void setLevel(int level) = 0;
};

class RealPermission : public AbstractPermission
{	
public:
    void modifyUserInfo()
	{
		cout<<"�޸��û���Ϣ��"<<endl;
	}

	void viewNote()
	{   }
	
	void publishNote()
	{
		cout<<"����������"<<endl;
	}
	
	void modifyNote()
	{
		cout<<"�޸ķ������ݣ�"<<endl;
	}
	
	void setLevel(int level)
	{	}
};

class PermissionProxy : public AbstractPermission
{
private:
    RealPermission* permission;//=new RealPermission();
	int level; 
		
public:
    PermissionProxy()
    {
        permission=new RealPermission();
        level=0;
    }

    void modifyUserInfo()
	{
		if(0==level)
		{
			cout<<"�Բ�����û�и�Ȩ��!"<<endl;
		}
		else if(1==level)
		{
			permission->modifyUserInfo();
		}
	}
	
	void viewNote()
	{
		cout<<"�鿴���ӣ�"<<endl;
	}
	
	void publishNote()
	{
		if(0==level)
		{
			cout<<"�Բ�����û�и�Ȩ��!"<<endl;
		}
		else if(1==level)
		{
			permission->publishNote();
		}		
	}
	
	void modifyNote()
	{
		if(0==level)
		{
			cout<<"�Բ�����û�и�Ȩ��!"<<endl;
		}
		else if(1==level)
		{
			permission->modifyNote();
		}		
	}
	
	void setLevel(int level)
	{
		this->level=level;
	}
};