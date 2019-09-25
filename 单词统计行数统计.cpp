#include<stdio.h>

main()
{
	char c;
	int words=0,h=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t')
			words++;
		if(c=='\n')
		{
			words++;
			h++;
		}
	}
	printf("words=%d\nh=%d\n",words,h);
}
