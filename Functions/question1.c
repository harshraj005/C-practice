#include<stdio.h>
int factorial();
int main()
{
	int a,b;
	printf("enter the number you want to calculate the factorial :");
	scanf("%d",&a);
	b=factorial(a);
	printf("the factorial of %d is %d",a,b);
	return 0;
}
int factorial(int x)
{
	int d=1,i=1;
	while(i<=x)
	{
		d=d*i;
		i++;
	}
	return(d);
}
