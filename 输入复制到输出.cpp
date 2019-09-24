#include<stdio.h>

main()
{
	int c,lastc;
	lastc=10;
	while((c=getchar())!=EOF)
	{
		if(c!=' ')
			putchar(c);
		if(c==' ')
			if(lastc!=' ')
				putchar(c);
		lastc=c;
	}
	return 0;
}