#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0;
	int i,j,total;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			sum=sum+i;
			total=sum+j;
			printf("\nsum=%d",total);
			
		}
	}
	getch();
}
