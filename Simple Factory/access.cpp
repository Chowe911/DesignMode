#include "access.h"

int main(int argc,char* argv[])
{
         
         {
         	User* user;
         	UserDAO* userDao=new UserDAO();
         	int permission=userDao->findPermission("zhangsan","123456");
         	user=UserFactory::getUser(permission);
         	user->sameOperation();
         	user->diffOperation();
         }
         return 0;
	}