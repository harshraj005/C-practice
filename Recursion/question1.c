#include<stdio.h>
int dig(int);
int main()
{
	int x,y;
	printf("enter any 5 digit number :");
	scanf("%d",&x);
	y=dig(x);
	printf("sum=%d",y);
	return 0;
}
int dig(int x)
{
if(x!=0)
return (x%10+dig(x/10));
else
return 0;
}
