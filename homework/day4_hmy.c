#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	while(1)
	{
		int n;
		printf("please intput number：");
		scanf("%d",&n);
		int i;
		for(i=0;i<n;i++)
		{
			printf(" %d ",rand()%10);
		
		
		}
		break;
	}
		return 0;
}
