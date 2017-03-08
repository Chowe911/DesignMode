#include "bank.h"

int main(int argc,char* argv[])
{
		BankTemplateMethod* bank;
		bank=new Transfer();//(BankTemplateMethod)XMLUtil.getBean();
		bank->process();
		cout<<"---------------------------------------"<<endl;
        return 0;
}