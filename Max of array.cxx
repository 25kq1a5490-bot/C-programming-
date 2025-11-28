#include<stdio.h>
int main(int argc, char *argv[])
{
int i, a[5], max=0;
printf("enter 5 integer number to continue");
for(i=0; i<4; i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1; i<4; i++)
{
	max=a[i];
	}
	printf("max array element:%d",max);	
}