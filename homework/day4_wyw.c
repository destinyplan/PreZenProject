/***************************************************
> Copyright (C) 2018 ==Darkaen== All rights reserved.
> File Name: w.c
> Author: Darkaen
> email:532729353@qq.com 
> Created Time: 2018年07月17日 星期二 17时31分28秒
***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
	int a,b;
	int n;
	srand((unsigned)time(NULL));
	while(1)
	{
		printf("请输入产生的随机区间: ");
		scanf("\n%d%d",&a,&b);
		printf("请输入产生几个随机值：");
		scanf("%d",&n);
		if(n>0&&n<=b-a)
		{
			for(i=0;i<n;i++)
			{
				printf(" %2d ",rand()%(b-a+1)+a);	//包含a，b
			}break;
		}
	}
		printf("\n");
		return 0;
}
