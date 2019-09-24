#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1415926

void main()
{
	int x,y,y1,r=50,r1;
	double a;

	int gdriver=VGA,gmode=VGAHI,color;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

	setbkcolor(WHITE);
	cleardevice();
	setcolor(RED);

	y1=240-r;
	for(a=0;a<2*PI;a+=PI/18)
	{
		x=r*cos(a)+320;
		y=r*sin(a)+240;
		r1=sqrt((x-320)*(x-320)+(y-y1)*(y-y1));
		circle(x,y,r1);
	}
	getchar();
	closegraph();
}
