/*
    a - is for positive.
    b
    c - is for negative.
*/
#include<stdio.h>
int main()
{
	int a,b,even,odd,i,A[25];
	printf("Enter 25 numbers n array :-\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=24;i++)
	{
		if(A[i]>0)
		{
			a++;
			if(A[i]%2==0)
			even++;
			else if (A[i]%2!=0)
			odd++;
		}
		else if(A[i]<0)
		{
			b++;
			if(A[i]%2==0)
			even++;
			else if (A[i]%2!=0)
			odd++;	
		}

	}
	printf("Numbers of positive are %d\n",a);
	printf("Numbers of negative are %d\n",b-1);
	printf("Numbers of odd are %d\n",odd);
	printf("Numbers of even are %d\n",even);
	return 0;
}
