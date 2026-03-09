#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[50];
	int i;
	char leg;
	
	printf("enter your name = ");
	gets(st1);
	
	for(i=1;i<=10;i++)
	{
		leg=st1;
		printf("lenght=",leg);
	}
}
