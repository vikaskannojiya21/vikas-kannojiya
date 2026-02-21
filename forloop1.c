#include<stdio.h>
#include<conio.h>
void main()
{
	int i ,c, k;
	for(i=5;i>=1;i--)
	{
		for(k=i;k<=6-1;k++)
		{
			printf(" ");
		}
		for(c=1;c<=i;c++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	getch();
}
