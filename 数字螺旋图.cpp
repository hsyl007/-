#include <stdio.h>

int main ()
{
	int m,n,x,j,i,h=1,b=1,c=2,d=2,e=2,f=2,g=3,k=3,l=3;
	int a[20][20];

	scanf ("%d",&n);
	if (n%2!=1)
	{
		m=(n/2-1);
		i=j=m;
		a[i][j]=h;
		h++;
		j++;
		a[i][j]=h;
		h++;
		i++;
		a[i][j]=h;
		h++;
		j--;
		a[i][j]=h;
		h++;
		for ( ; m>0; m--)
		{
			j--;
			a[i][j]=h;
			h++;
			for ( x=0; x<f; x++)
			{
				i--;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<g; x++)
			{
				j++;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<k; x++)
			{
				i++;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<l; x++)
			{
				j--;
				a[i][j]=h;
				h++;
			}
			f+=2,g+=2,k+=2,l+=2;
		}	
	}
	else 
	{
		
		m=n/2;
		i=j=m;
		a[i][j]=h;
		h++;
		for (; m>0; m--)
		{
			j++;
			a[i][j]=h;
			h++;
			for ( x=0; x<b; x++)
			{
				i++;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<c; x++)
			{
				j--;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<d; x++)
			{
				i--;
				a[i][j]=h;
				h++;
			}
			for ( x=0; x<e; x++)
			{
				j++;
				a[i][j]=h;
				h++;
			}
			b+=2,c+=2,d+=2,e+=2;
		}
	}
	for ( i=0; i<n; i++)
	{
		for ( j=0; j<n; j++)
			printf ("%4d",a[i][j]);
		printf ("\n");
	}


	return 0;
}