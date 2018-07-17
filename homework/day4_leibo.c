#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int suiji(int n,int x,int y)
{
	int num;
	time_t t;
	for(int i=0;i<n;i++)
	{
		num = rand()%y;
		printf("%d ",num);
	}
}

int main()
{
	int n,x,y;
	printf("请选择输出几个随机数:");
	scanf("%d",&n);
	printf("请输入一个最大数，一个最小数:");
	scanf("%d,%d",&x,&y);
	suiji(n,y,x);
}

