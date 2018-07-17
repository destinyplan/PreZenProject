#include <stdio.h>

void Multiplication(int max)
{	
	int i,j,k;
	if(max <= 0) {
		printf("error!\n");
	}
	for(i = 1;i <= max;i++) {
		for(j = 1;j <= i;j++) {
			k = i * j;
			printf("%d*%d=%d\t",i,j,k);
		}
		printf("\n");
	}	
}

int Factorial_1(int n)
{
	if (n == 0) {
		return 1;
	}
	else {
	return n * Factorial_1(n-1);
	}
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
	Multiplication(num);
//	printf("%d!=%d\n",num,num*Factorial_1(num-1));
//	Factorial_2(num);
//	F(num);
	return 0;
}
