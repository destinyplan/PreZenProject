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
	int result=1;
	for(int i=1;i<=num;i++)
	{
		result=result*i;
		printf(" %d!=%d\n",i,result);
	}
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
	printf("what do you want:");
	scanf("%d",&a);
	mul_tab(a);

	
	int b;
	scanf("%d",&b);
	printf("here is %d factorial\n",b);
	factorial_01(b);


	int num;
	scanf("%d",&num);
	printf("here is %d factorial\n",num);
	printf(" %d!=%d\n",num,factorial_02(num));


	int c;
	scanf("%d",&c);
	printf("%d.  %d+%d=%d\n",c,series(c-1),series(c-2),series(c));

}
