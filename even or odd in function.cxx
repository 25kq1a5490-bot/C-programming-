#include<stdio.h>
int main(int argc, char *argv[])
{
int a;
void evenOdd(int);
printf("enter a value");
scanf("%d",&a);
evenOdd(a);
}
void evenOdd(int a)
{
	if(a%2==0)
	printf("given number is even");
	else
	printf("given numbet is odd");
	}	