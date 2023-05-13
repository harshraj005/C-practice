#include<stdio.h>
int fact(int);
int main()
{
	int a,b;
	printf("Enter any number of which you want to check factorial :");
	scanf("%d",&a);
	b=fact(a);
	printf("factorial=%d",b);
	return 0;
}
int fact(int x)
{
	int facto=1;
	if(x>0)
	facto=x*fact(x-1);
	return facto;
}
