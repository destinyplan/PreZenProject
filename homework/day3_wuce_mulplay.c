#include "stdio.h"
void mul(int max)
{
	int i,j;
	if(max>0 && max<10)
	{
		printf("你需要的%d乘法表如下:",max);
		for(i=1;i<max+1;i++)
		{
			for(j=1;j<i+1;j++)
			{
				printf("%d*%d=%d  ",j,i,i*j);
			}
			printf("\n");
		}
	}
	else
	{
		printf("输入错误,请重新输入:");
		scanf("%d",&max);
		mul(max);
	}
}
void Factorial_v1(int n)
{
	int i,result=1;
	if(0==n)
	{
		printf("0的阶乘是1");
	}
	else
	{
		for(i=1;i<n+1;i++)
		{
			result = result * i;
		}
		printf("%d的阶乘是%d\n",n,result);
	}
}
int Factorial_v2(n)
{
	long int result;
	if(0==n)
	{
		return 1;;
	}
	else
	{
		result = n * Factorial_v2(n-1);
		return result;
	}
}
int fabonacci(n)
{
	long int result;
	if(n<3)
	{
		return 1;
	}
	else
	{
		result = fabonacci(n-1) + fabonacci(n-2);
		return result;
	}
}
void main()
{
	int k,y;
	long int result;
	printf("0.乘法表\n");
	printf("1.N的阶乘(for循环实现)\n");
	printf("2.N的阶乘(递归)\n");
	printf("3.斐波那利数列\n");
	printf("请输入需要实现的功能:");
	scanf("%d",&y);
	switch(y)
	{
		case 0:printf("请输入你需要的几阶乘法表:");
		scanf("%d",&k);
		mul(k);
		break;
		case 1:printf("请输入你需要计算的阶乘数:");
		scanf("%d",&k);
		Factorial_v1(k);
		break;
		case 2:printf("请输入你需要计算的阶乘数:");
		scanf("%d",&k);
		result = Factorial_v2(k);
		printf("%d的阶乘是%d\n",k,result);
		break;
		case 3:printf("请输入你需要计算的斐波那利数:");
		scanf("%d",&k);
		result = fabonacci(k);
		printf("%d的斐波那利数是%d\n",k,result);
		break;
	}
}
