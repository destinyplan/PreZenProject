#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void randd()
{
	int list[2]={0},i,j,a;
 	srand ((unsigned) time(0));
	for(int i = 0;i<3;i++)
	{
		while(1)
		{
			a=rand()%10+1;
			for(j = 0;j < i;j++)
				{
					if(list[j]==a)
					break;
				}
			if(j==i)
			{
				list[i] = a;
				break;
			}
						
		}
	}
	for(i=0;i<3;i++)		
	printf(" %d ",list[i]);
	
	printf("\n");
}

int main(void)
{
	int a;
	randd(a);
}
