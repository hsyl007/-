#include<stdio.h>
int main(void){
    char a[3][3]={0},i,j;
	scanf("%d%d",&i,&j);
	a[i][j]=1;
    for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}