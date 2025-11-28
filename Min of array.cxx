#include<stdio.h>
int main(int argc, char *argv[])
{
int i, a[5], min;
printf("enter 5 integer number to continue");
for(i=0; i<=4; i++)
{
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1; i<=4; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			}}
			printf("min array element:%d",min);	
}