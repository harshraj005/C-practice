#include<stdio.h>
int main()
{
	int n,i,temp;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int A[n];
	printf("Enter %d elements in array :-\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i+=2)
	{
		temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
	printf("interchanged Array :");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
