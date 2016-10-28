#include<stdio.h>
#include<stdlib.h>
balanceenquiry(){
int b;
printf("enter your ID NO");
scanf("%d",&b);
if(b==12345){
printf("your amount is 1500");}
else{printf("wrong Id");}}

withdrawal(){
printf("enter your amount to be withdrawed");}
minicase(){
scanf("enter the amount");}

int main(){
int a;
printf("enter your number between 1 to 3",&a);
scanf("%d",&a);
switch(a){

case(1):balanceenquiry();break;
case(2):withdrawal();break;
case(3):minicase();break;
}
}

