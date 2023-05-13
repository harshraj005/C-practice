#include<stdio.h>
int dig(int);
int main()
{
	int x,y;
	printf("enter any 5 digt number");
	scanf("%d",&x);
	y=dig(x);
	printf("sum=%d",y);
	return 0;
}
int dig(int a)
{
	int r,q,sum=0,x=10000;
	while(r>=0)
	{
		q=a/x;
		sum=sum+q;
		r=a%x;
		x=x/10;
		if(r==0)
		break;
		else
		a=r;
	}
	return(sum);
}
