#include<stdio.h>
int main()
{
	int n,i,j,d;
	printf("Enter the numbers of elements in Array =");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in Array =");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	d=n-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[d])
		printf("%d=%d\t",arr[i],arr[d]);
		d--;
	}
	return 0;
}
