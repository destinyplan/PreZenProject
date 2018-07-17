#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int food(int num)
{
	srand((int)time(0));
	for(int i=1;i<=num;i++)
	{
		printf("%d  ",rand()%10);
	}
	printf("\n");
	return 0;
}

int main()
{
	int num;
	printf("please input the number of figure:\n");
	scanf("%d",&num);
	food(num);
}

