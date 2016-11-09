// We can alse add a condition for factorial only for numbers between 0 and 33 as the factorial of numbers more than 33 become irrelevent to calculate.

#include<stdio.h>
 unsigned long int fact( int i){
if(i){                                                   //defining and declaring the function at same place
	if(i!=1){
		return fact(i-1)*i;}
else 
	return 1;}}
int main(){
int a;


printf("please enter your number");
scanf("%d",&a);
printf("your factorial is =%d",fact(a));                // calling a function
} 

