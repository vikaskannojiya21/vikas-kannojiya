#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n elemnt of array=");
		scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
		printf("\n a[%d]:%d",i,a[i]);
	
	}
	for(i=4;i>=0;i--){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	getch();
}
