#include <stdio.h>
#include<stdio_ext.h>
 
int main()
{
    int     num;
    char    choice;
    do
    {
        printf("Enter an integer number :");
        scanf("%d",&num);
  
        if(num==0)      
            printf("Number is ZERO.");
        else if(num>0)   
            printf("Number is POSITIVE.");
        else          
            printf("Number is NEGATIVE.");
  
        printf("\n\nWant to check again (press Y/y for 'yes') :");
        __fpurge(stdin);      
        scanf("%c",&choice); 
    }while(choice=='Y' || choice=='y');
 
    printf("\nBye Bye!!!");
  
   
}
