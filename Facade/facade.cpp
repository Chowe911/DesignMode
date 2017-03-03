#include "facade.h"

int main(int argc,char* argv[])
{
		GeneralSwitchFacade* gsf=new GeneralSwitchFacade();
		gsf->on();
		cout<<"-----------------------"<<endl;
		gsf->off();
        return 0;
}