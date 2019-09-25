#include<stdio.h>
void move(char getone, char putone)
{
	printf("%c-->%c\n",getone,putone);
}
void Hanoi(int n, char one, char two, char three)
{
	if(n==1)
		move (one, three);
	else
	{
		Hanoi (n-1, one, three, two);
		move (one, three);
		Hanoi (n-1, two, one, three);
	}
}
void main ()
{
	int m;
	printf ("Input the number of distake:");
	scanf ("%d",&m);
	printf ("The steps of moving %d distakes:\n",m);
	Hanoi(m,'A','B','C');
}
