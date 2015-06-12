
#include "common.h"

int GetNum()
{
	return 100;
}
int main(int argc,char ** argv)
{

	LOG_INFO("hello ATF\n");
	int num=GetNum();
	LOG_INFO("here getNum=%d\n",num);
	return 0;
}
