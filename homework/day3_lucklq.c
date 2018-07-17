#include<stdio.h>
#include<stdlib.h>

int  func1(int num)
{

	if(num==0)
	{
		return 1;
	}
	else

		return num*func1(num-1);
}

void func2()
{
	int sum=1;
	int i,j;
	printf("第二种方法求阶乘please a number :\n");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		sum*=j;


	}
	printf("%d\n",sum);
}

int  init(int n)
{

	int i;
	if(n==2||n==1)
		return 1;
	else 
		return init(n-2)+init(n-1);

}

void  mul()
{
	int sum;
	int m=0;
	int i=0,j=0;
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=i*j;


			printf("%d * %d=%3d  ",j,i,sum);
		}
		printf("\n");
	}
	printf("\n");
}
void fibonacci()
{

	printf("求第n组非波那切函数please  input anumber :");
	int n,m;
	scanf("%d",&m);
	for(n=1;n<=m;n++)
	{

		printf("%d    ",init(n));

	}
	printf("\n");
}

int main()
{
	printf("第一种方法求阶乘please input a number :");
	int num;
	scanf("%d",&num);
	printf("%d\n",func1(num));
	func2();

	fibonacci();
	printf("您需要的乘法表(几阶？)：\n");

	mul();

	exit  (0);
}
