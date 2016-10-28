#include<stdio.h>
int main(){
char sign;
double one,two;

printf("enter 2 nos");
scanf("%lf %lf",&one,&two);

printf("enter two number");
scanf("%c",&sign);
switch(sign)
{
case '+':
printf("your answer is %0.1lf + %0.1lf=%0.1lf",one,two,one+two);break;
}}
