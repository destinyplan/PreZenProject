#include <stdio.h>
void math()
{
	int i;
	int j;
	int a;
	printf("please input a number:");
	scanf("%d",&a);
	if((a>0)&&(a<10))
	{
		for(i=1;i<=a;i++)
		{
			printf("\n%d:",i);
			for( j=1;j<=i;j++)
			{
				printf(" %d*%d=%d ",j,i,j*i);
			}
			printf("\n");
		}
	}else{
		printf("this is false,please input again:");
		math();
	     }
}
void jiecheng1()
{
	int num;
	int i;
	int result=1;
	printf("input jieshu:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{	
		result=result*i;
	}
		printf("%d!= %d\n",num,result);
}  
int jiecheng2(int num)
{
	if(0==num)
	{
		return 1;
	}else  { 
		int sum=0;
		sum=num*jiecheng2(num-1);
		return sum;
         	}
}
long int fun(int n)
{ 
	int i;
	int result;
	if(n==1 ||n==2)
		return 1;
	else
		return fun(n-1)+fun(n-2);
}
/*
int feibonaqi(n)
{
	int a=1;
	int b=1;
	int c;
	for(int i=0;i<n;i++)
	{
		if(1==n||n=0)
		printf("1");
	}	else 
	{
		c=a+b;
		b=a;
		printf("%d",c);
	}
}
*/


void main()
{ 
	int n;
	int i;
	printf("please chose:\n");	
	printf("1.9*9chenrfabiao\n");	
	printf("2.jiecheng1\n");	
	printf("3.jiecheng2\n");	
	printf("4.feibonalieshulie\n");	
	scanf("%d",&i);
	if(i==1){
			math();
		}else if(i==2)
		{
			jiecheng1();
		}else if(i==3)
		{
			printf("n de jiecheng:");
			scanf("%d",&i);
			printf("%d!=%d\n",i,jiecheng2(i));
		}else if(i==4)
		{
			printf("please input numnber:");
        		scanf("%d",&n);
//			fengbonaqi();
			for(i=1;i<=n;i++)
			{
               			 printf("%d ",fun(i));
       			}
		printf("\n");
		}	
	
}

