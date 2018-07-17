#include <stdio.h>

int chengfa()
{
	int i0;
	printf("几阶乘法�?0~9):");
	scanf("%d",&i0);
	if((i0>=1)&&(i0<=9)){
		int i,j;
		int sum;
		for (i=1;i<=i0;i++){
			for(j=1;j<=i;j++){
				sum = i*j;
				printf("%d*%d=%d  ",i,j,sum);
			}
			printf("\n");
		}
	}else{
	printf("错误，请重新输入！！\n");
	chengfa();
	}
	return 0;
}

int jiecheng1()
{
	int i,j;
	printf("n的阶乘：");
	scanf("%d",&i);
	int num=1;
	for(j=1;j<=i;j++){
		num=num*j;
	}
	printf("%d!=%d\n",i,num);
}

int jiecheng2(int i)
{
	if (i == 0){
		return 1;
	}else{
		int sum = 0;
		sum = i*jiecheng2(i-1);
		return sum;
	}
}


long int fun (int n)
{
	if(n==1||n==2){
		return 1;
	}
	else{
		return fun(n-1)+fun(n-2);
	}
}

int main (void)
{
	int i;
	while (1){
		printf("********************\n");
		printf("1：九九乘法表\n");
		printf("2：阶�?方法一)\n");
		printf("3：阶�?方法�?\n");
		printf("4：菲薄那列数列\n");
		printf("输入错误直接退出\n");
		printf("********************\n");
		scanf("%d",&i);
		if(i==1){
			chengfa();
		}else if(i==2){
			jiecheng1();
		}else if(i==3){
			int i;
			printf("n的阶乘：");
			scanf("%d",&i);
			printf("%d!=%d\n",i,jiecheng2(i));
		}else if(i==4){
			int n,i=1;
			printf("请输入项�?");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				printf("%ld  ",fun(i));
			}
			printf("\n");
		}else{
			printf("it is wrong!\n");
			break;
			}
	}
	return 0;
}

