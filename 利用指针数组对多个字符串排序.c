#include<stdio.h>
#include<string.h>
void SortString(int n,char *str[])
{
	char *c;
	int i,j;
	//ц╟ещеепР
	for (i=0;i<n-2;i++)
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{c=str[j];str[j]=str[j+1];str[j+1]=c;}
		}
}

void main()
{
	int i;
	char *lan[]={"China","France","Arab"};
	SortString(3,lan);
	for(i=0;i<3;i++)
		printf("\n%s\n",lan[i]);
}