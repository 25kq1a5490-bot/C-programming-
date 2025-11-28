# include<stdio.h>
int main(int argc, char *argv[])
{
int i, a[5];
printf(" enter 5 integer  number to continue");
for(i=0; i<=4; i++)
scanf("%d",&a[i]);
printf("array elements divisible by 5 are");
for(i=0; i<=4; i++)
{
	if(a[i]%5==0)
	{
		printf("%d",a[i]);
		}}	
}