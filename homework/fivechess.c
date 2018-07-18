#include <stdio.h>
#include <stdbool.h>

#define MAP_LENGTH 10

bool AI(int mmp[10][10],int key)
{
	int d[8]={0};
	for(int i=0;i<MAP_LENGTH;i++)
	{
		for(int j=0;j<MAP_LENGTH;j++)
		{
			if(key==mmp[i][j])
			{
				//right-up
				if((i-1)>=0&&(j+1)<10&&mmp[i-1][j+1]==key)
				{
					d[0]=1;
					bool isOK=true;
					for(int k=1;k<=3;k++)
					{
						int x ,y;
						x=i-1-k;
						y=j+1+k;
						if(x>=0&&y<10&&mmp[x][y]!=key)
						{	
							//printf("x=%d,y=%d,%d\n",x,y,mmp[x][y]);
							isOK=false;
							break;
						}
					}
					//printf("123456:::%d\n",isOK);
					if(isOK)
					{
						return true;
					}
				}
				//right
				if((j+1)<10&&mmp[i][j+1]==key)
				{
					d[0]=1;
					bool isOK=true;
					for(int k=1;k<=3;k++)
					{
						int x ,y;
						x=i;
						y=j+1+k;
						if(y<10&&mmp[x][y]!=key)
						{
							isOK=false;
							break;
						}
					}
					if(isOK)
					{
						return true;
					}
				}
				//right-down
				if((i+1)<10&&(j+1)<10&&mmp[i+1][j+1]==key)
				{
					d[0]=1;
					bool isOK=true;
					for(int k=1;k<=3;k++)
					{
						int x ,y;
						x=i+1+k;
						y=j+1+k;
						if(x<10&&y<10&&mmp[x][y]!=key)
						{
							isOK=false;
							break;
						}
					}
					if(isOK)
					{
						return true;
					}
				}
				//down
				if((i+1)<10&&mmp[i+1][j]==key)
				{
					d[0]=1;
					bool isOK=true;
					for(int k=1;k<=3;k++)
					{
						int x ,y;
						x=i+1+k;
						y=j;
						if(x<10&&mmp[x][y]!=key)
						{
							isOK=false;
							break;
						}
					}
					if(isOK)
					{
						return true;
					}
				}
			}
		}
//		printf("\n");
	}
	
	return false;
}

void main()
{
	int map[MAP_LENGTH][MAP_LENGTH]={0};
/*{{0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,1,0,7,0,0,0,0,0,0},{1,0,0,0,7,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
*/	
	int p1=1;
	int p2=7;
	
	bool isP1=true;
	int x=0,y=0;
	while(1)
	{
		printf("***********************************\n");
		if(isP1)
		{
			printf("请<鸣人>落子(示例:行,列)：");
			scanf("%d,%d",&x,&y);
			if(0==map[x-1][y-1])
			{
				map[x-1][y-1]=1;
				
				bool flag=AI(map,1);
				if(flag)
				{
					printf("Naruto Win!\n");
					return;
				}
				isP1=false;
			}else
			{
				printf("1.already has qizi,please set again\n");
				continue;
			}			
		}
		else
		{
			printf("请<佐助>落子(示例:行,列)：");
			scanf("%d,%d",&x,&y);
			if(0==map[x-1][y-1])
			{
				map[x-1][y-1]=7;
				bool flag=AI(map,7);
				if(flag)
				{
					printf("Sasuke Win!\n");
					return;
				}
				isP1=true;
			}else
			{
				printf("2.already has qizi,please set again\n");
				continue;
			}
		}

		printf("************************\n");
		printf("当前棋局:\n");
		printf("         1  2  3  4  5  6  7  8  9 A B C D E F G\n");
		printf("*********************************************\n");
		for(int i=0;i<MAP_LENGTH;i++)
		{
			printf(" %3d *  ",i+1);
			for(int j=0;j<MAP_LENGTH;j++)
			{
				printf(" %d ",map[i][j]);
			}
			printf("\n");
		}
		
	}	
}
