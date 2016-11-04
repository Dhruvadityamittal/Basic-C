#include<stdio.h>
int main(){
int number,sum=0,i;
printf("pleae enter your number");
scanf("%d",&number);
for(i=1;i<number;i++){
if(number%i==0){
sum=sum+i;
}}
if(number==sum){printf("%d is a perfect number",number);}
else{printf("%d is not a perfect number",number);}
}
