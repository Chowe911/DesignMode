#include "tv.h"



int main(int argc,char* argv[])
{
         try
         {
         	TV* tv;
         	TVFactory* factory;
           // template<typename T>
                factory=new HaierTVFactory();//(TVFactory)XMLUtil.getBean();
         	    tv=factory->produceTV();
         	    tv->play();
           
         }
         catch(...)
         {
         	
         }
	return 0;
}



