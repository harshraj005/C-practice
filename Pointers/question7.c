//greatest common divisor ...
#include<stdio.h>
int gcd(int *,int *);
int main()
{
	int a,b,c;
	printf("enter the numbers of which you want to calculate greatest common divisor :");
	scanf("%d%d",&a,&b);
	printf("\nthe greatest common divisor of %d and %d is :",a,b);
	c=gcd(&a,&b);
	printf("%d",c);
	return 0;
}
int gcd(int *j,int *k)
{
	int x,y,i=1;
	do{
		x=*j/(*k);
		y=*j-(x*(*k));
		if(y==0){
		return(*k);
		break;
		}
		*j=*k;
		*k=y;
		x=0;
		i++;
	}while(i<=10000);
	
}
