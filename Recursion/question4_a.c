#include<stdio.h>
long binary(int );
int main()
{
	int a;
	long b;
	printf("Enter any decimal type number :");
	scanf("%d",&a);
	b=binary(a);
	printf("binary =%ld",b);
}
long binary(int a)
{
	static long sum=0,r,m=1;
	if(a!=0)
	{
		r=a%2;
		sum=sum+(r*m);
		m=m*10;
		binary(a/2);
	}
	return sum;
}
