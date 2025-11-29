#include<stdio.h>
int main(int argc, char *argv[])
{
int a;
void printnum(int);
a=10;
printf("\n In Main a=%d",a);
printnum(a);
printf("\n In main end a=%d",a);
}
void printnum(int a)
{
	a++;
	printf("\nIn printnum fun a=%d",a);	
}