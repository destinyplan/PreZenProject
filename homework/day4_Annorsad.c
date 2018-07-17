#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int random_number(int num)
{
	int i,min,max;
	printf("请输入区间：");
	printf("最小值：");
	scanf("%d",&min);
	printf("最大值：");
	scanf("%d",&max);
	if(max-min>=num)
	{
		srand((int) time(0));
		printf("数据如下：\n");
		for(i=0;i<num;i++)
		{
			int ran=rand()%(max-min+1)+min;
			printf("  %d  ",ran);
		}
		printf("\n");
		return num;
	}else
	{
		printf("数据有误，请重新输入\n");
	}
}


int  main()
{
	int a;
	printf("你想得到几位随机数：");
	scanf("%d",&a);
	random_number(a);
}

