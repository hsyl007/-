#include<stdio.h>

main()
{
	float F;
	printf("»ªÊÏÎÂ¶È		ÉãÊÏÎÂ¶È\n");
	for(F=0;F<=300;F+=20)
		printf("%f			%f\n",F,(5.0/9.0)*(F-32));
	return 0;
}
