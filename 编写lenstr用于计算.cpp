#include<stdio.h>
int lenstr(char*str)
{
	int len=0;
	while(*str!='\0')
	{
		len =len+1;
		str++;
	}
	return len;
}
main ()
{
	int slen;
	char *p="Love china!";
	slen=lenstr(p);
	printf("The length of the string is %d\n",slen);
	return 0;
}