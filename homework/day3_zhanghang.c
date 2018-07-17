#inlclude <stdio.h>

//Multiplication

#if 0

int Table()
{
        int n;
        printf("please you need Multiplication  \n");
        scanf("%d",&n);
   {   
        for(int i=1;i<n+1;i++)//列
        {
                printf("\n");
                        for(int j=1;j<=i;j++)
                        {   
                                printf(" %d*%d=%d ",i,j,i*j);//行       
                        }
        }   
        printf("\n");
  }

}
#endif


//factoral

#if 0
int factoral_v1(int num)
{
        int result =1;
        int i;
        for(i=1;i<=num;i++)
        {
                result=result*i;
        }
        printf("%d!=%d",num,result);
        printf("\n");
}
#endif

#if 0
 int factoral_v2(int num)
{
        if(num==0)
        {
                return 1;
        }
        else
        {
                int sum=0;
                sum=num*factoral_v2(num-1);
                return sum;
        }
}
#endif

//fibonaqi

int fibo(int n)
{    
        if(n < 3)
        {
                return 1;
        }
        else 
        {
                int sum=0;
                sum= fibo(n-1)+fibo(n-2);
                return sum;
        }
    
}


int main()
{
	Table(9);//99乘法表
	
	for(int i=1;i<10;i++)
	{
	int result = factoral_v1(i);//阶乘输出
	int result = factoral_v2(i);
	printf("%d = %d\n",i,result);
	}

	{//斐波那契
        int n;
        printf("Please input you wang is feibonaqi:\n");
        scanf("%d",&n);
        int sum = fibo(n);
        printf("%d=%d\n",n,sum);
}



}
