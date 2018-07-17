#include<stdio.h>
int mult()
{       
	int i;
	int j;
 	for(int i=1;i<=10;i++)
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
	int a;
	int b;
	int c=1;
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		c=c*a;
		printf("%d:,%d\n",a,c);
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
	
        int a=1;
        int b=1;
        int c;
        for(c=1;c<n;c++)
        {
                printf("%d\n%d\n",a,b);
                a=a+b;
                b=b+a;
        }
}



void main()
{
/*1111mult*/
	//mult();

/*2222jiecheng*/
	//jiecheng();

/*3333jiecheng_2*/
	/*int n;
	jiecheng_2(n);
	scanf("%d\n",&n);
	printf("%d!=%d\n",n,jiecheng_2(n));*/

/*4444feibonaqie*/
	/*int n;
	scanf("%d",&n);
       fbnq(n);*/
       
}
