#include<string>
#include<iostream>
using namespace std;

class User
{
public:
    virtual void sameOperation()
	{
        cout<<"修改个人资料！"<<endl;
	}
	
	virtual void diffOperation()=0;
};

class Administrator : public User
{
public:
    Administrator()
	{
		cout<<"创建管理员对象！"<<endl;
	}
	
	void diffOperation()
	{
		cout<<"管理员拥有创建和管理假条权限！"<<endl;
	}
};

class Employee : public User
{
public:
    Employee()
	{
		cout<<"创建员工对象！"<<endl;
	}
	
	void diffOperation()
	{
		cout<<"员工拥有创建假条权限！"<<endl;
	}
};

class Manager : public User
{
public:
    Manager()
	{
		cout<<"创建经理对象！"<<endl;
	}
	
	void diffOperation()
	{
		cout<<"经理拥有创建和审批假条权限！"<<endl;
	}
};


class UserDAO
{
public:
    int findPermission(string userName,string userPassword)
    {
    	if("zhangsan"==userName && "123456"==userPassword)
    	{
    		return 2;
    	}
    	else
    	{
    		return -1;
    	}
    }
};

class UserFactory
{
public:
    static User* getUser(int permission)
	{
		if(0==permission)
		{
			return new Employee();
		}
		else if(1==permission)
		{
			return new Manager();
		}
		else if(2==permission)
		{
			return new Administrator();
		}
		else
		{
			return NULL;
		}
	}
};

