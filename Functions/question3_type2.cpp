#include<stdio.h>
int year(int);
int main()
{
	int a,b;
	printf("enter any year :");
	scanf("%d",&a);
	b= year (a);
	if(b==0)
	printf("Leap year");
	else
	printf("not a Leap year");
}
int year(int x)
{
	int d;
	d=x%4;
	return (d);
}