#include<stdio.h>
#include<stdio_ext.h>
int main(){
char x;
printf("enter the operator");
scanf("%c",&x);
int a,b,add,subtract, multiply;

printf("enter your First Value: ");
__fpurge(stdin);
scanf("%d",&a);

printf("enter your Second Value: ");
__fpurge(stdin);
scanf("%d",&b);


add=(a+b);
subtract=(a-b);
multiply=(a*b);
switch(x){
case '+': printf("%d",(a+b));break;
case '-': printf("%d",subtract);break;
case '*': printf("%d",multiply);break;
}
}
