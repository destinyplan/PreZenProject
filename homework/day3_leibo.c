#include <stdio.h>


int nultable(int max)
{	
	int i,j;
        printf("请输入你需要几阶乘法表:\n");
        scanf("%d",&max);
        for(i=1;i<max+1;i++)
        {
		for(j=1;j<i+1;j++)
                {
                        printf(" %d*%d=%d ",i,j,i*j);
                }
                printf("\n");
        }printf("\n");
}

int Factaory_V1(int num)
{
        int i,result =1;
        for(i=1;i<=num;i++)
        {
                result=result*i;
        }
        printf("%d!=%d",num,result);
        printf("\n");
}

int Factaory_V2(int n)
{
        int result;
        if(n == 0)
        {
                return 1;
        }else
        {
                result = n*Factaory_V2(n-1);
                return result;
     	}printf("%d!=%d\n",n,result);
}
                
int fabonacci(int n)
{
	int result;
	if(n<3)
	{
		return 1;
	}else
	{
		result = fabonacci(n-1) + fabonacci(n-2);
		return result;	
	}
}

int main()
{
	int i,result;
        nultable(9);
        for(i=1;i<10;i++)
        {
        result =Factaory_V1(i);
        result =Factaory_V2(i);
	}

        for(i=1;i<10;i++)
        {
	result =fabonacci(i);
	printf(" %d ",result);
	}printf("\n");

}
