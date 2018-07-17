#include<stdio.h>

int yunsuanbiao()
{
	int x, i, j;
	printf("输入数字x:");
	scanf("%d",&x);
	if(x<0 || x>9)
	{
		printf("输入错误,请重新输入！\n"); 
		return yunsuanbiao();
	}
	for(i=1;i<=x;i++)
	{
		printf("\n ",i);
		for(j=1;j<=i;j++)
			printf("%d*%d=%d ",j,i,j*i);
	}
}

int jiejia1()
{
	int j=20,a[j];
	if(j=1) a[1]=1;
	if(j=2) a[2]=1;
	for( j=1;j<=20;j++)
	{	
		a[j+2]=a[j+1]+a[j];	
		printf("\n%d",a[j]);
	}
}

int jiecheng(int i)
{
	if(i==0)
	return 1;
	else
	{
		return i*jiecheng(i-1);
	}		
}

int jiejia(int i)
{
	if(i==1 || i==2)
	return 1;
	else
	{
	return jiejia(i-1)+jiejia(i-2);
	}
}


int main(void)
{
	int i,x,y,n;
	printf("输入n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	/*{
		printf("输入i:");
		scanf("%d",&i); 
		if(i==-1)
		{
		printf("跳出，进入下个运算！\n");
		return yunsuanbiao();
		} */
		if( x=jiecheng(i))
		{
			printf("i=%d  ",i);
			printf("x=i!=%d  ",x);
		}
		if( y=jiejia(i))
		
		{
			//printf("i=%d  ",i);
			printf(" y=%d\n",y);	
		}
	}
	yunsuanbiao();
	int a;
	printf("\n请输入'0'继续执行:");
	scanf("%d",&a);
	if(a==0)
	{
		jiejia1();
	}

} 




       
