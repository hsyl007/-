#include<stdio.h>
#include<math.h>
int main()
{
	char a[50];
	int s[50];
	int b,n,c,d,i,f,j,sum;
	scanf("%d",&n);
	for(b=0;b<n;b++)
	{
		scanf("%s",a);
		i=0;
		sum=0;
		while(a[i]!='\0')
		{
			i++;
		}
		c=0;
		f=0;
		for(d=0;d<i;d++)
		{
			if(a[d]=='-')
			{
				d++;
				f=1;
			}
			s[c]=a[d]-48;
			c++;
		}
		i=0;
		for(c--;c>=0;c--)
		{
			
			sum+=s[c]*pow((double)2,i);
			i++;
		}
		if(f==1)
		{
			printf("-");
		}
		printf("%d ",sum);
	}
	return 0;
}
