#include<stdio.h>
void mul_tab(int m)
{
	for(int i=1;i<=m;i++)
	{
		printf("\n%d.",i);
		for(int j=1;j<i+1;j++)
		{
			printf(" %d*%d=%d ",j,i,j*i);
		}
	}
	printf("\n");
}


void factorial_01(int num)
{
	int result=1,i;
	for(i=1;i<=num;i++)
	{
		result=result*i;
	}
	printf(" %d!=%d\n",i-1,result);
}


int factorial_02(int num)
{
	if(num==0)
	{	
		return 1;
	}
	else
	{
		return	factorial_02(num-1)*num;
	} 
}

int series(int c)
{
	if(c==2||c==1)
	{
		return 1;
	}
	else
	{
		return series(c-1)+series(c-2);
	}
}



void main()
{
	int a;
	printf("输入想要的乘法表阶数: ");
	scanf("%d",&a);
	printf("%d阶乘法表如下：",a);
	mul_tab(a);

	
	int b;
	printf("for循环实现阶乘，输入阶数：");
	scanf("%d",&b);
	printf("这是%d的阶乘为：\n",b);
	factorial_01(b);


	int num;
	printf("递归法实现阶乘，输入阶数：");
	scanf("%d",&num);
	printf("这是%d的阶乘为：\n",num);
	printf(" %d!=%d\n",num,factorial_02(num));


	int c;
	printf("输入你想得到几阶斐波那契数列：");
	scanf("%d",&c);
	printf("这是你想要的斐波那契数列：\n");
	for(int i=1;i<=c;i++)
	{
		printf(" %d ",series(i));
	}
	printf("\n");
}
