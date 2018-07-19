#include "stdio.h"
#include "stdbool.h"
#define MAP_H 10
#define MAP_L 10
bool AI(int a[MAP_H][MAP_L],int key)
{
	int i,j,k;
	for(i=0;i<MAP_H;i++)
	{
		for(j=0;j<MAP_L;j++)
		{
			if(key==a[i][j])
			{
				for(k=1;k<=4;k++)
				{
					if(a[i][j+k]!=key)
					{
						break;
					}
					else
					{
						if((j+k)<MAP_L&&(a[i][j+k]==key))
						{
							if(4!=k)
							{
								continue;
							}
							else
							{
								return true;
							}
						}
					}
				}
				for(k=1;k<=4;k++)
				{
					if(a[i-k][j+k]!=key)
					{
						break;
					}
					else
					{
						if((i-k)>0&&(a[i-k][j+k]==key))
						{
							if(4!=k)
							{
								continue;
							}
							else
							{
								return true;
							}
						}
					}
				}
				for(k=1;k<=4;k++)
				{
					if(a[i+k][j+k]!=key)
					{
						break;
					}
					else
					{
						if((i+k)<MAP_H&&(j+k)<MAP_L&&(a[i+k][j+k]==key))
						{
							if(4!=k)
							{
								continue;
							}
							else
							{
								return true;
							}
						}
					}
				}
				for(k=1;k<=4;k++)
				{
					if(a[i+k][j]!=key)
					{
						break;
					}
					else
					{
						if((i+k)<MAP_H&&(a[i+k][j]==key))
						{
							if(4!=k)
							{
								continue;
							}
							else
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	
}
void main()
{
	int i,j,x,y;
	bool chess = true;
	bool s=false;
	int a[MAP_H][MAP_L]={0};
	while(1)
	{
		if(chess==true)
		{
			printf("请玩家A落子,落子区间hang(1~%d),lie(1~%d):",MAP_H,MAP_L);
			scanf("%d,%d",&x,&y);
			if((x-1)>=0&&(y-1)>=0&&(x-1)<MAP_H&&(y-1)<MAP_L&&(a[x-1][y-1]==0))
			{
				a[x-1][y-1]=3;
				s = AI(a,3);
				if(s==true)
				{
					printf("A is win!\n");
					return;
				}
				chess = false;
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("请玩家B落子,落子区间hang(1~%d),lie(1~%d):",MAP_H,MAP_L);
			scanf("%d,%d",&x,&y);
			if((x-1)>=0&&(y-1)>=0&&(x-1)<MAP_H&&(y-1)<MAP_L&&(a[x-1][y-1]==0))
			{
				a[x-1][y-1]=1;
				s = AI(a,1);
				if(s==true)
				{
					printf("B is win!\n");
					return;
				}
				chess = true;
			}
			else
			{
				continue;
			}
		}
		for(i=0;i<MAP_H;i++)
		{
			for(j=0;j<MAP_L;j++)
			{
				printf(" %d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
