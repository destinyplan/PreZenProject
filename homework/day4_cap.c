#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void PrintRandomNum(int n,int i,int a)
{
	printf("*****************\n");
	int min,max;
	min=i;
	max=a;
	if(i>a)
	{
		min=a;
		max=i;
	}
	int nums = max-min+1;
	if(nums<n || n<=0)
	{
		printf("has error(n>[i,a]||n<=0)");
		return;
	}

	time_t t;
	srand((unsigned)time(&t));
	printf("*************\n");
	int num=0;
	int list[n];
	int index=0;
	printf("random result:");
	while(1)
	{
		num = rand()%(max-min+1)+min;
		bool isSame=false;
		for(int i=0;i<n;i++)
		{
			if(list[i]==num)
			{
				isSame=true;
				break;
			}
		}
		if(isSame)
		{
			continue;
		}
		list[index]=num;
		index++;
		if(index==n)
		{
			break;	
		}
	}

	for(int i=0;i<n;i++)
	{
		printf(" %d ",list[i]);
	}
	printf("\n");
}

void main()
{
	int n,min,max;
	printf("Please input num:");
	scanf("%d",&n);
	printf("Please input range:");
	scanf("%d,%d",&min,&max);
	PrintRandomNum(n,min,max);
}
