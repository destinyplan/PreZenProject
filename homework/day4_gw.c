#include <stdio.h>
#include <time.h>
void suiji(int i,int j,int k)
{
	time_t t;
	srand((unsigned) time(&t));
	printf("抽取的数值如下:");
	int n,m;
	while(1){
		for (n=0;n<i;n++){
			m=rand()%(k-j+1)+j;
			printf(" %d ",m);	
		}
		printf("\n");
		break;
	}
}

int main (void)
{
	int i,j,k;
	while(1){
		printf("你想抽取几个:");
		scanf("%d",&i);
		printf("抽取区间:");
		scanf("%d %d",&j,&k);
		if((i>0)&&(i<(k-j))){
			suiji(i,j,k);
			break;
		}else{
			printf("it is wrong,请重新输入:");
			continue;
		}
	}
}
