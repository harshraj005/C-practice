#include<stdio.h>
int population(int,int);
int main()
{
	int years =10,popul=10000,yrsb;
	yrsb=population(years,popul);
	printf("answer=%d",yrsb);
	return 0;
}
int population(int x,int y)
{
	y=y-(y/10);
	x=x-1;
	if(x>=1)
	y=population(x,y);
	return y;
}
