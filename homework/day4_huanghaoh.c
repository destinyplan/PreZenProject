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
		printf("������������x��y:");
		scanf("\n%d%d",&x,&y);
	
		if(x>y)
		{	
			printf("����������������룡\n");
			continue;
		}
		printf("ȡ��������ĸ���n:");
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
