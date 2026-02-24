#include<stdio.h>
#include<conio.h>
void main()
{

	int a[3][3],i,j;
	int b[3][3];
	int sub[3][3];

	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Elemnt of 2d array =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)

	{
		for(j=0;j<3;j++)
		{
			printf("\na[%d][%d]=%d",i,j,a[i][j]);
			
		}
	}
	
	printf("\n----------");
		
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nElemnt of 2d array =",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)

	{
		for(j=0;j<3;j++)
		{
			printf("\nb[%d][%d]=%d",i,j,b[i][j]);
			
		}
	}
	printf("\n=========");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		sub[i][j]= a[i][j] - b[i][j];
		}
	}
	
	for(i=0;i<3;i++)

	{
		for(j=0;j<3;j++)
		{
			printf("\nsub[%d][%d]=%d",i,j,sub[i][j]);
			
		}
	}
	
	getch();
}
	
