#include<stdio.h>
int mult()
{       
	int i;
	int j;
	int num;
	scanf("%d",&num);
 	for(int i=1;i<=num;i++)
	{
		printf("\n%d:",i);
		for(int j=1;j<=i;j++)
		{
			printf(" %d*%d=%d " ,i,j,i*j);
		}
	}
}

int  jiecheng()
{
	int result=1;
	int b;
	scanf("%d",&b);
	for(int i=1;i<=b;i++)
	{
		result=result*i;
		printf("%d:%d\n",i,result);
	}
}

int jiecheng_2(int n)
{
	int sum=0;
	if(n == 0)
	{
		return 1;
	}
	else 
	{
		sum=n*jiecheng_2(n-1);
		return sum;
	}
}

int fbnq(int n)
{
	int result;
	if (n<3)
	{
		return 1;
	}
	else
	{
		result=fbnq(n-1)+fbnq(n-2);
		return result;
	}
}



void main()
{
//111111
	mult();
//2222222
	jiecheng();

/*3333jiecheng_2*/
	int m;
	jiecheng_2(m);
	scanf("%d",&m);
	printf("%d!=%d\n",m,jiecheng_2(m));

/*4444feibonaqie*/
	int x,i;
	int result;
        scanf("%d",&x);
	for(i=1;i<=x;i++)
        {
		result=fbnq(i);
		printf("%d ",result);
	}
}
