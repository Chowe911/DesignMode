#include "tv.h"

int main(int argc,char* argv[])
{
         try
         {
         	TV tv;
         	TVFactory factory;
         	factory=(TVFactory)XMLUtil.getBean();
         	tv=factory.produceTV();
         	tv.play();
         }
         catch(Exception e)
         {
         	cout<<e.getMessage()<<endl;
         }
	
}
