#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
	int x,y,z;
	int n;
	srand((unsigned)time(NULL));
	while(1)
	{
		printf("输入两个数字x和y:");
		scanf("\n%d%d",&x,&y);
	
		if(x>y)
		{	
			printf("输入错误，请重新输入！\n");
			continue;
		}
		printf("取出随机数的个数n:");
		scanf("%d",&n);
		if(x<=y && n>0 && n<=y-x)
		{
			for(i=0;i<n;i++)
			{
				z=rand()%(y-x+1)+x;
				printf(" %2d ",z);	
			}break;
		}
	}
		printf("\n");
		return 0;
}
