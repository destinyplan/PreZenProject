#include<stdio.h>

int jisuan()
{
	int x, i, j;
	printf("输入数字x:");
	scanf("%d",&x);
	if(x<0 || x>9)
	{
		printf("输入错误,请重新输入！\n"); 
		return jisuan();
	}
	for(i=1;i<=x;i++)
	{
		printf("\n ",i);
		for(j=1;j<=i;j++)
		printf("%d*%d=%d ",j,i,j*i);
	}
}

int dicheng(int i)

{

	if(i==0)
	return 1;
	else
	{
		return i*dicheng(i-1);
	}		
}

int dijia(int i)
{
	if(i==1 || i==2)
	return 1;
	else
	return dijia(i-1)+dijia(i-2);
}


int main(void)
{

	
	
	{
		
		int i,x,y;
		//for(i=1;i<=10;i++)
		
		{
		printf("输入i:");
		scanf("%d",&i); 
		if(i==-1)
		{
		printf("输入错误！\n");
		return jisuan();
		} 
		if( x=dicheng(i))
		{
			printf("i=%d  ",i);
			printf("x=%d  ",x);
		}
		if( y=dijia(i))
		{
		
			printf("y=%d\n",y);	
		}
		}return main();
			
	}
	
	
} 

        
