#include "permission.h"

int main(int argc,char* argv[])
{
		AbstractPermission* permission;
		permission=new PermissionProxy();//(AbstractPermission)XMLUtil->getBean();

		permission->modifyUserInfo();
		permission->viewNote();
		permission->publishNote();
		permission->modifyNote();
		cout<<"----------------------------"<<endl;
		permission->setLevel(1);
		permission->modifyUserInfo();
		permission->viewNote();
		permission->publishNote();
		permission->modifyNote();
        return 0;
}