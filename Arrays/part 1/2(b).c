//insertion sort...
#include<stdio.h>
int main()
{
	int arr[25],i,j,temp;
	printf("Enter all 25 numbers in array :")
	;for(i=0;i<25;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<25;i++)
	{
		if(arr[i]<arr[0])
		{
			temp=arr[i];
			for(j=i;j>0;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[0]=temp;
			continue;
		}
	}
	printf("Sorted array :");
	for(i=0;i<25;i++)
	printf("%d ",arr[i]);
	return 0;
}
