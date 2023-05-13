#include<stdio.h>
int count();
int main()
{
	count();
	return 0;
}
int count()
{
	int a;
	char m;
	static int x=0,y=0,z=0;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a>0)
	x=x+1;
	else if(a<0)
	y=y+1;
	else 
	z=z+1;
	printf("Want to enter more numbers (press y for yes) :");
	fflush(stdin);
	scanf("%c",&m);
	if(m=='y'||m=='Y')
	{
	count();
	}
	else
	{
	printf("\n%d positive\n%d negative\n%d zero",x,y,z);
	return 0;
	}
}
