#include<stdio.h>
int table(int );
int main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	table(a);
	return 0;
}
int table(int x)
{
	static int a=1,b;
	b=x*a;
	printf("%d * %d =%d\n",x,a,b);
	a=a+1;
	if(a<=10)
	table(x);
	else
	return 0;
}
