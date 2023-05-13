#include<stdio.h>
int power();
int main()
{
	int a,b,c;
	printf("enter the base :");
	scanf("%d",&a);
	printf("enter the exponent :");
	scanf("%d",&b);
	c=power(a,b);
	printf("answer= %d",c);
}
int power(int x,int y)
{
	int d=1,i=1;
	while(i<=y)
	{
		d=d*x;
		i++;
	}
	return(d);
}
