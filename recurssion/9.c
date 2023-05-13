#include<stdio.h>
void game(int);
int main()
{
	printf("the game of matchstick...");
	printf("\nrules:-\n(1)there are 21 matchsticks\n(2)players will pick 1,2,3,4 matchsticks\n(3)after the user the computer does its picking\n(4)whoever is forced to pick the last matchstick loses the game...");
	int a=21;
	game(21);
	return 0;
}
void game(int x)
{
	int y,z;
	printf("\n\nenter 1,2,3 or 4 matchsticks to pick it :");
	scanf("%d",&y);
	if(y<=4)
	{
	z=5-y;
	printf("\nthe computer picked :%d",z);
	x=x-5;
	if(x>1)
	game(x);
	if(x==1)
	printf("\nYou are a loser...");
	}
	else
	{
		printf("\nYou entered invalid input ...game has stopped working and you are a cheater");
	}
}
