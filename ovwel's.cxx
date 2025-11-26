#include<stdio.h>
int main(int argc, char *argv[])
{
char ch;
printf("enter char");
scanf("%c", &ch);
switch(ch)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': printf("given char is ovwel");
	break;
	default: printf("given char in consonent");
	}	
}