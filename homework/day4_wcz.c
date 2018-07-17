#include <stdio.h>
#include <time.h>

int randc(int num,int min,int max)
{
	num = rand()%(max - min + 1) + min;
	return num;
}

int main(void)
{
	int n,min,max,i,a;
	srand((unsigned)time(NULL));
	printf("请选择输出几个随机数:");
	scanf("%d",&n);
	printf("请输入一个最小数，一个最大数(min max):");
	scanf("%d%d",&min,&max);
	for (i = 0;i < n;i++) {
		a = randc(n,min,max);
		printf("%d ",a);
	}
	return 0;
}
