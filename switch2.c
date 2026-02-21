#include<stdio.h>
#include<conio.h>
void main()
{
     int a=10;
     int b=2;
     char operation;
     printf("enter your operation = %c",operation);
     scanf("%c",&operation);
     switch(operation){
         case 'A':
              printf("ADD of a and b= %d",a+b);
              break;
         case 'b':
              printf("sub of a and b=%d",a-b);
              break;
         case 'c':
              printf("product of a and b=%d",a*b);
              break;
         case 'd':
              printf(" div of a and b=%d",a/b);
              break;
         default:
                 printf(" invaid operation");
                 }
         
         }

