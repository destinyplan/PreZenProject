#include <stdio.h>

int Multiplication()
{	
	int max,i,j,k;
	while(1){
		printf("give me number:");
		scanf("%d",&max);
		if(max <= 0) {
			printf("error!\n");
			continue;
		}
		for(i = 1;i <= max;i++) {
			for(j = 1;j <= i;j++) {
				k = i * j;
				printf("%d*%d=%d\t",i,j,k);
			}
			printf("\n");
		}	
		break;
	}
}

int Factorial_1(int n)
{
	int a;
	if (n == 0) {
		return 1;
	}
	else {
	a = n * Factorial_1(n-1);
	printf("%d!=%d\n",n,a);
	}
	return a;
}

void Factorial_2(int n)
{
	int a = 1;
	int i;
	for(i = 1;i <= n;i++) {
		a = a * i;
	}
	printf("%d!=%d",n,a);	
}

void F(int n)
{	
	int a = 1,b = 1,i,c;
	for (i = 0;i < n;i++)
	{
		if (i == 1 || i == 0) {
		printf("1 ");
		}
		else {
		c = a + b;
		printf("%2d",c); 
		a = b;
		b = c;
		}
	}
}

int main(void)
{	
	int num;
	printf("give me number:");
	scanf("%d",&num);
//	Multiplication();
//	Factorial_1(num);
//	Factorial_2(num);
	F(num);
	return 0;
}
