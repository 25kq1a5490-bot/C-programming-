#include<stdio.h>
int main(int argc, char *argv[])
{
auto int mainvar;
void printnum();
mainvar=10;
printnum();
printf("\n in main:%d", mainvar);
}
void printnum()
{
	auto int mainvar;
	printf("in printnum %d", mainvar);
		
}