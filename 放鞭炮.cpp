#include<stdio.h>
int main()
{

	int a1,b1,c1,i,f,a,b,c,d,time,alltime,times;
	while(1)
	{
		times=1;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0)break;
		time=(a>b)?a:b;
		time=(time>c)?time:c;
		alltime=time*d;
		times=1;
		a1=1,b1=1,c1=1;
		for(i=1;i<=alltime;i++)
		{
			f=0;	
			if((i-1)%a==0&&(a1)<=d)
			{
				a1++;
				f=1;		
			}
			 if((i-1)%b==0&&(b1)<=d)
			{
				b1++;
				f=1;
			}
			 if((i-1)%c==0&&(c1)<=d)
			{
				c1++;
				f=1;
			}
			if(f==1)times=times+1;
		}
		printf("%d\n",times-1);
	}
	return 0;
}