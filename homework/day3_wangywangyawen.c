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
	math();}
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
	}else{
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

void main()
{
 
	int n;
	int i;

	printf("please chose:\n");	
	printf("9*9chenrfabiao\n");	
	printf("jiecheng1\n");	
	printf("jiecheng2\n");	
	printf("feibonalieshulie\n");	
	scanf("%d",&i);
	if(i==1){
	math();
}else if(i==2){
	jiecheng1();
}else if(i==3){
	printf("n de jiecheng:");
	scanf("%d",&i);
	printf("%d!=%d\n",i,jiecheng2(i));
}else if(i==4){
	
	printf("please input numnber:");
        scanf("%d",&n);
	for(i=1;i<=n;i++)
        {
                printf("shulie de di %d xiang shi:%d\n ",i,fun(i));
        }

//	math();	
//	jiecheng1();
//	jiecheng2();
//	fun(n);
}

}
