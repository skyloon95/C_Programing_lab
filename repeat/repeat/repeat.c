#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int n = atoi(argv[1]);
	for(i=0 ; i<n ; i++)
		printf("%s\n",argv[2]);

	return 0;
}