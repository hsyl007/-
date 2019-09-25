#include<stdio.h>
int cmpStr(char s1[],char s2[])
{
	int i,diff;
	i=0;
	while ((s1[i]==s2[i])&&(s1[i]!='\0'))i++;
	if(s1[i]=='\0'&&s2[i]=='\0')
		diff=0;
	else
		diff=s1[i]-s2[i];
	return diff;
}
void main()
{
	int z;
	char s1[100],s2[100];
	printf("Input the first string:");
	gets(s1);
	printf("Input the second string:");
	gets(s2);
	z=cmpStr(s1,s2);
	printf("The difference between two string is %d\n",z);
}