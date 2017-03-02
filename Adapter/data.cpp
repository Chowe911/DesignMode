#include "data.h"

int main(int argc, char* argv[])
{
		DataOperation dao=new NewCipherAdapter();//(DataOperation)XMLUtil.getBean();
		dao->setPassword("sunnyLiu");
		string ps=dao->getPassword();
		string es=dao->doEncrypt(6,ps);
		cout<<"明文为： + "<<ps<<endl;
		cout<<"密文为： + "<<es<<endl;

        return 0;
}