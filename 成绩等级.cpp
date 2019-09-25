#include<stdio.h>
#include<math.h>
#include<windows.h>

int main()
{
	int temp;
	double score;
	char grade;
	scanf("%f",&score);
	temp=int(score)%10;
	switch(temp)
	{
		case 10:
		case 9:grade='A';break;
		case 8:grade='B';break;
		case 7:grade='C';break;
		case 6:grade='D';break;
		default:grade='E';break;
	}
	printf("%c\n",grade);
	system("pause");
	return 0;
}