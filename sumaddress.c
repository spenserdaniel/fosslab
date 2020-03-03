#include<stdio.h>
int sumadr(int *a,int *b);
void main()
{
int a=10,b=3;
int sum;
sum=sumadr(&a,&b);
printf("%d+%d=%d",a,b,sum);
}
int sumadr(int *a,int *b)
{
int *sum;
int sum=0;
*sum=*a+*b;
*a=12;
*b=16;
return sum;
}
