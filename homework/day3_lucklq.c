#include<stdio.h>
#include<stdlib.h>

int  func1(int num)
{

if(num==0)
{
return 1;
}
else

return num*func1(num-1);
}

void func2()
{
int sum=1;
int i,j;
printf("阶乘2please a number :\n");
scanf("%d",&i);
for(j=1;j<=i;j++)
{
sum*=j;


}
printf("%d\n",sum);
}

int  sort(int n)
{

if(n==2||n==1)
return 1;
else 
return sort(n-2)+sort(n-1);


}

void init()
{
int sum;
int i=0,j=0;
for(i=0;i<10;i++)
{
for(j=1;j<=i;j++)
{
sum=i*j;


printf("%d * %d=%3d  ",j,i,sum);
}
printf("\n");
}
printf("\n");
}
int main()
{
printf("求结乘please a number :");
int num;
scanf("%d",&num);
printf("%d\n",func1(num));
//printf("%d",a);
func2();
printf("求第n组非波那切函数please a number :");
int n;
scanf("%d",&n);
printf("%d\n",sort( n));
printf("试写出乘法表：\n");
init();

exit  (0);
}
