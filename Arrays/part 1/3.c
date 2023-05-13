#include<stdio.h>
int main()
{
   int i,j,isPrime;
   int a[100];
   for(i=0;i<100;i++)
    a[i]=i+1;
    for(i=0;i<100;i++)
    { 
    	isPrime=1;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				isPrime=0;
	  			break;
	  		}
		}
	if(isPrime==1)
	printf("%d\t",a[i]);
	}
	return 0;
}
