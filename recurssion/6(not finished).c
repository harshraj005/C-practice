#include<stdio.h>
int fact(unsigned int );
int call(unsigned int );
int main()
{
	unsigned int b;
	unsigned int a=7;
	b=call(a);
	printf("Sum=%u",b);
	return 0;
}
int fact(unsigned int m)
{
	unsigned int n;
	if(m>0)
	{
	n=(m*fact(m-1));
	}
	return n;
}
int call(unsigned int x)
{
	unsigned int y;
	if(x>=0)
	{
	y=(x/fact(x)+call(x-1));
	}
	return y;
}

