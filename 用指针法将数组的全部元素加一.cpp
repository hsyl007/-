#include <stdio.h>
int main()
{
	int a[5]={1,3,5,7,9},*p,j;
	for(p=a;p<a+5;p++)
	printf("%3d",*p);
	printf("\n");
	p=a;
	for(j=0;j<5;j++)
	{
		*(p+j)=*(p+j)+1;
		printf("%3d",*(p+j)); 
	}
	return 0;
 } 
