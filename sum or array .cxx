#include<stdio.h>
int main(int argc, char *argv[])
{
int i,a[5],s=0;
printf("enter 5 integer number to continue");
for(i=0; i<4; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<4; i++)
s=s+a[i];
	printf("sum of array elements:%d", s);	
}