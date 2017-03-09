#include <iostream>
#include <string>
using namespace std;

class LeaveRequest
{
private:
    string leaveName;
	int leaveDays;
	
public:
    LeaveRequest(string leaveName,int leaveDays)
	{
		this->leaveName=leaveName;
		this->leaveDays=leaveDays;
	}
	
	void setLeaveName(string leaveName) {
		this->leaveName = leaveName; 
	}

	void setLeaveDays(int leaveDays) {
		this->leaveDays = leaveDays; 
	}

	string getLeaveName() {
		return (this->leaveName); 
	}

    int getLeaveDays() {
		return (this->leaveDays); 
	}	
};

class Leader
{
public:
    string name;
	Leader* successor;


    Leader(string name)
	{
		this->name=name;
	}
	void setSuccessor(Leader* successor)
	{
		this->successor=successor;
	}
	virtual void handleRequest(LeaveRequest* request) = 0;
};



class GeneralManager : public Leader
{
public:
    GeneralManager(string name):Leader(name)
	{
		
	}
	
	void handleRequest(LeaveRequest* request)
	{
		if(request->getLeaveDays()<30)
		{
			cout<<"总经理" << name << "审批员工" << request->getLeaveName() << "的请假条，请假天数为" << request->getLeaveDays() << "天。"<<endl;
		}
		else
		{
			cout<<"莫非" << request->getLeaveName() << "想辞职，居然请假" << request->getLeaveDays() << "天。"<<endl;
		}
	}
};

class ViceGeneralManager : public Leader
{
public:
    ViceGeneralManager(string name):Leader(name)
	{
		
	}
	void handleRequest(LeaveRequest* request)
	{
		if(request->getLeaveDays()<20)
		{
			cout<<"副总经理" << name << "审批员工" << request->getLeaveName() << "的请假条，请假天数为" << request->getLeaveDays() << "天。"<<endl;
		}
		else
		{
			if(this->successor!=NULL)
			{
				this->successor->handleRequest(request);
			}
		}
	}
};

class Manager : public Leader
{
public:
    Manager(string name):Leader(name)
	{
		
	}
	void handleRequest(LeaveRequest* request)
	{
		if(request->getLeaveDays()<10)
		{
			cout<<"经理" << name << "审批员工" << request->getLeaveName() << "的请假条，请假天数为" << request->getLeaveDays() << "天。"<<endl;
		}
		else
		{
			if(this->successor!=NULL)
			{
				this->successor->handleRequest(request);
			}
		}
	}
};

class Director : public Leader
{
public:
    Director(string name):Leader(name)
	{
		
	}
	void handleRequest(LeaveRequest* request)
	{
		if(request->getLeaveDays()<3)
		{
			cout<<"主任" << name << "审批员工" << request->getLeaveName() << "的请假条，请假天数为" << request->getLeaveDays() << "天。"<<endl;
		}
		else
		{
			if(this->successor!=NULL)
			{
				this->successor->handleRequest(request);
			}
		}
	}
};
