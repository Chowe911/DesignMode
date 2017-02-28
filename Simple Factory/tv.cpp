#include "tv.h"
int main(int argc,char* argv[])
{
        
         {
         	TV* tv;
         	string brandName="Haier";//XMLUtilTV.getBrandName();
         	tv=TVFactory::produceTV(brandName);
         	tv->play();
         }
         
	}