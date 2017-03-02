#include "robot.h"

int main(int argc,char* argv[])
{
		Robot* robot=new BirdAdapter();//(Robot)XMLUtil.getBean();
		robot->cry();
		robot->move();
}