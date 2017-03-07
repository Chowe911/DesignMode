#include "animal.h"

int main(int argc,char* argv[])
{
		MySubject* subject=new Cat();
		
		myObserver *obs1,*obs2,*obs3;
		obs1=new Mouse();
		obs2=new Mouse();
		obs3=new Dog();
		
		subject->attach(obs1);
		subject->attach(obs2);
		subject->attach(obs3);
		
		myObserver* obs4;
		obs4=new Pig();
		subject->attach(obs4);
		
		subject->cry();	
        return 0;	
}