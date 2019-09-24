#include<stdio.h>
int main()
{
	int input,input1,b ;
	float input2;
	while(1)
	{
		b=0;
		scanf("%d",&input);
		if(input==0)break;
		input1=input;
		while(input1!=0)
		{
			if(input1%10==7)
			{
				printf("%d ",input);
				b=1;
				break;
			}
			input1=input1/10;
		}
		if(b!=1)
		{
		input2=(float)input;
		input2=input2/7;
		if(input2-(int)input2==0)
		{
			printf("%d ",input);
		}
		}
	}
	return 0;
}
