#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter the class obtained by student :");
	scanf("%d",&a);
	printf("\nenter the number of the subject student failed :");
	scanf("%d",&b);
	switch(a)
	{
		case 1:
			if(b>3)
			printf("no grace marks");
			else
			printf("5 marks per subject");
			break;
		case 2:
			if(b>2)
			printf("no grace marks");
			else
			printf("4 marks per subject");
			break;
		case 3:
			if(b>1)
			printf("no grace marks");
			else
			printf("5 marks per subject");
			break;
		default :
			printf("tere ko kahe ka grace chahiye bhai");
			break;
	}
	return 0;
}
