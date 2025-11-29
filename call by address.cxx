#include<stdio.h>
int main(int argc, char *argv[])
{
int a;
void printnum(int *);
a=10;
printf("\n In Main a=%d",a);
printnum(&a);
printf("\n In Main end a=%d",a);
}
void printnum(int *a)
{
	*a=*a+1;
	printf("\n In printnum fun a=%d",*a);	
}