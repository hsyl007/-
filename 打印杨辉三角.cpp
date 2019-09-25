#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=1,h,i,j;
    scanf("%d", &h);  
    if(h<1||h>20)
	{
		printf("error");
	}
	else{
		printf("1\n");              
		for (i = 2; i <= h; s = 1, i++)    
		{
			printf("1 ");             
			for (j = 1; j <= i - 2; j++) 
			printf("%d ", (s = (i - j) * s / j));
			printf("1\n");               
		}
	}	    
		getchar();     
	return 0;
}
