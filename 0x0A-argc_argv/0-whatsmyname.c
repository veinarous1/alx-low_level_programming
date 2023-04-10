#include <stdio.h>
#include "main.h"
/**
 * prints the name without without repeated compilation
 * using argc,argv
 * path is not removed before the name of program
 **/
int main(int argc,char *argv[])
{
	printf("%s\n",*argv);
	(void)argc;
	return 0;
}
