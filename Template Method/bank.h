#include <iostream>
using namespace std;

class BankTemplateMethod
{
public:
    void takeNumber()
	{
		cout<<"ȡ���Ŷӡ�"<<endl;
	}
	
	virtual void transact() = 0;
	
	void evaluate()
	{
		cout<<"�������֡�"<<endl;
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
		cout<<"���"<<endl;		
	}
};

class Transfer : public BankTemplateMethod
{
public:
    void transact()
	{
		cout<<"ת��"<<endl;		
	}
};

class Withdraw : public BankTemplateMethod
{
public:
    void transact()
	{
		cout<<"ȡ��"<<endl;		
	}
};