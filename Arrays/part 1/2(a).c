//bubble sort...
#include<stdio.h>
int main()
{
	int A[25],i,j,swap;
	printf("Enter 25 numbers in array :");
	for(i=0;i<25;i++)
	scanf("%d",&A[i]);
	for(i=0;i<24;i++)
	{
		for(j=24;j>=0;j--)
		{
			if(A[j]>A[j+1])
			{
				swap=A[j];
				A[j]=A[j+1];
				A[j+1]=swap;
			}
		}
	}
	printf("Sorted Array :");
	for(i=0;i<25;i++)
	printf("%d ",A[i]);
	return 0;
}
