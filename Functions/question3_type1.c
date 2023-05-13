#include<stdio.h>
int leapyear();
int main()
{
	leapyear();
	return 0;
}
int leapyear()
{
	int a,b;
	printf("enter any year :");
	scanf("%d",&a);
	b=a%4;
	if(b==0)
	printf("leap year");
	else
	printf("not a leap year");
}
