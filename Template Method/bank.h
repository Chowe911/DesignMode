#include <iostream>
using namespace std;

class BankTemplateMethod
{
public:
    void takeNumber()
	{
		cout<<"取号排队。"<<endl;
	}
	
	virtual void transact() = 0;
	
	void evaluate()
	{
		cout<<"反馈评分。"<<endl;
	}

    void process()
    {
        this->takeNumber();
        this->transact();
        this->evaluate();
    }
};

class Deposit : public BankTemplateMethod
{
public:
    void transact()
	{
		cout<<"存款"<<endl;		
	}
};

class Transfer : public BankTemplateMethod
{
public:
    void transact()
	{
		cout<<"转账"<<endl;		
	}
};

class Withdraw : public BankTemplateMethod
{
public:
    void transact()
	{
		cout<<"取款"<<endl;		
	}
};