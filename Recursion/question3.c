#include<stdio.h>
int sequence(int,int);
int main()
{
	int a=1,b=1;
	printf("%d %d",a,b);
	sequence(a,b);
	return 0;
}
int sequence(int a,int b)
{
	int c;
	c=a+b;
	printf(" %d",c);
	a=b;
	b=c;
	if(c<75025)
	sequence(a,b);
	else
	return 0;
}
