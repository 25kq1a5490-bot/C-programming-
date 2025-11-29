#include<stdio.h>
int main(int argc, char *argv[])
{
int a[3]={10,20,30};
int i;
int *ptr;
ptr=a;
for(i=0; i<=2; i++)
printf("%d ",*(ptr++));	
}