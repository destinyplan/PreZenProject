#include <stdio.h>

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



int factorial_v1(int n)
{
	if (n == 0) {
		return 1;
	}
	else {
	return n * factorial_v1(n-1);
	}
}

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
	Table(9);
	
//	factoral_v1(9);

	int n;
	int sum;

	
	printf("Please input jicheng num: \n");
	scanf("%d",&n);
	
	int num;	
	printf("%d! = %d\n",n,n*factorial_v1(n-1));
	sum=factoral_v2(n);
	printf("%d! = %d \n",n,sum);



        printf("Please input you wang is feibonaqi:\n");
        scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		sum = fibo(i);
		printf("%d ",sum);
	}	
	printf("\n");




}
