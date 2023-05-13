#include<stdio.h>
int range();
int main()
{
	range();
	return 0;
}
int range()
{
	char x;
	static int a=0,b=0,c,r;
	printf("Enter any number:");
	scanf("%d",&a);
	printf("Enter any number:");
	scanf("%d",&c);
	if(c>a&&c>b)
	{
		b=c;
	}
	else if(c<a&&c<b)
	{
		a=c;
	}
	else
	{
		c=c;
	}
	printf("Want to enter more numbers :");
	fflush(stdin);
	scanf("%c",&x);
	if(x=='y'||x=='Y')
	range();
	r=b-a;
	printf("Range =%d",r);
}
