#include<stdio.h>
#include<stdlib.h>
int i=1;
int main(int argc, char *argv[])
{
int printnum();
printnum();
printf("final value is:%d",i);
}
int printnum()
{
	printf("%d ",i++);
	if(i==6)
	return 0;
	printnum();
		
}