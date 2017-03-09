#include "it.h"

void display(Television* tv)
	{
		TVIterator* i=tv->createIterator();
		cout<<"电视机频道："<<endl;
		while(!i->isLast())
		{
			cout<<i->currentChannel()<<endl;
			i->next();
		}
	}

void reverseDisplay(Television* tv)
	{
		TVIterator* i=tv->createIterator();
		//i->setChannel();
		cout<<"逆向遍历电视机频道："<<endl;
		while(!i->isFirst())
		{
			i->previous();
			cout<<i->currentChannel()<<endl;
		}
	}

int main(int argc,char*argv[])
{
        //string obj[]={"CCTV-1","CCTV-2","CCTV-3","CCTV-4","CCTV-5","CCTV-6","CCTV-7","CCTV-8"};
		Television* tv;
		tv=new TCLTelevision();
        display(tv);
		cout<<"--------------------------"<<endl;
		reverseDisplay(tv);
        delete(tv);
        tv=new SkyworthTelevision();//(Television)XMLUtil->getBean();
		display(tv);
		cout<<"--------------------------"<<endl;
		reverseDisplay(tv);
        return 0;
}