#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	printf("press:\n1-factorial of a number\n2- check prime or not\n3-check odd or even\n4-to exit the code\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("enter the number you want to factorial");
			scanf("%d",&b);
			i=1,c=1;
			while(i<=b)
			{
				c=c*i;
				i++;
			}
			printf("the factorial of %d is %d",b,c);
			break;
		case 2:
			d=0;
			printf("enter the number you want to check prime or not");
			scanf("%d",&b);
			i=2;
			while(i<b)
			{
				c=b%i;
				if(c==0)
				d++;
				i++;
			}
			if (d==0)
			printf("the number is prime...");
			else 
			printf("the number is not prime...");
			break;
		case 3:
			printf("enter the number you want to check odd or even");
			scanf("%d",&b);
			c=b%2;
			if(c==0)
			printf("the number is even");
			else
			printf("the number is odd");
			break;
		
	}
	return 0;
}
