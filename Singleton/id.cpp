#include "id.h"

int main(int argc,char* argv[])
{
	   IdentityCardNo *no1,*no2;
	   no1=IdentityCardNo::getInstance();
       no2=IdentityCardNo::getInstance();
       cout<<"身份证号码是否一致： + "<<(no1==no2)<<endl;
       
       string str1,str2;
       str1=no1->getIdentityCardNo();
       str2=no1->getIdentityCardNo();
       cout<<"第一次号码： + "<<str1<<endl;
       cout<<"第二次号码： + "<<str2<<endl;
       cout<<"内容是否相等： + "<<(str1==str2)<<endl;
       cout<<"是否是相同对象： + "<<(str1==str2)<<endl;
}