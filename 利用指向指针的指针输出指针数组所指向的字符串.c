#include<stdio.h>
void main()
{
	int i;
	char *pArray[]={"One","Two","Three"};
	char **p;
	p=pArray;
	for(i=0;i<3;i++,p++)
		printf("%s\n",*p);
	printf("\n");
}