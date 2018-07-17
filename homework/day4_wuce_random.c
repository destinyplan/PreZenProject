#include "stdio.h"
#include "time.h"
void Check_Random(int s,int x,int y)
{
	time_t t;
	int i,m,j=0;
	int list[s];
	srand((unsigned) time(&t));
	for(i=0;i<s;i++)
	{
		int index=0;
		m = rand()%(y+1);
		if(m>=x)
		{
			while(1)
			{
				if(list[index]==m)
				{
					i--;
					break;
				}
				else
				{
					index++;
					if(index==s-1)
					{
						printf("%d ",m);
						list[j]=m;
						j++;
						break;
					}
				}
			}
			continue;
		}
		else
		{
			i--;
		}
	}
}
void main()
{
	int s,x,y;
	printf("请输入需要随机数的个数:");
	scanf("%d",&s);
	printf("请输入需要随机数的取值范围:");
	scanf("%d,%d",&x,&y);
	Check_Random(s,x,y);
	printf("\n");
}
