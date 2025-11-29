#include<stdio.h>
int main(int argc, char *argv[])
{
int a,*b;
a=10; b=&a;
printf("%d",a);
printf("\n%d",&a);
printf("%d",b);
printf("\n%d",*b);	
}