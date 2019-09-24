/*在屏幕上显示杨辉三角形：
1
1 1
1 2 1
1 3 3 1
*/
#include<stdio.h>
#include<windows.h>
#define M 20
void main(){
	int a[M][M];
	int i=0,j=0,n;
	printf("请输入三角形的大小：\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i][0]=1;
		a[i][i]=1;		
	}
	for(i=2;i<n;i++)
		for(j=1;j<=i-1;j++){
		a[i][j]=a[i-1][j-1]+a[i-1][j];
		}	
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d  ",a[i][j]);
		
		}
			printf("\n");
	}
	system("pause");	
}
