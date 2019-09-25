#include<stdio.h>
//#include<stdlib.h>
#include<math.h>


#define max 9999 

double ClosestPodoubles(int n,double x[],double y[]){
	int i,j;
	double d,minDist,indexx1,indexy1,indexx2,indexy2;
	minDist = max;
	for (i=1;i<n;i++){
		for (j=i+1;j<=n;j++){
			d =(x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) ;
			if ( d < minDist ) {
			minDist = d;
			indexx1 = x[i];
			indexy1 = y[i];
			indexx2 = x[j];
			indexy2 = y[j];
			}
		}
	}
	printf("最近点对为：（%d,%d），（%d,%d）\n",indexx1,indexy1,indexx2,indexy2);
	return minDist;
}

int main()
{
	
	double x[1000],y[1000];
	double minDist;
	int n=10;
	x[n]=(-8,13,-4,3,9,3,1,-1,6,9);
	y[n]=(7,0,-5,3,12,7,1,-1,1,-2);

	minDist=ClosestPodoubles(n,x,y);
	printf("mindist is %f\n",sqrt(minDist));
	return 0;


}