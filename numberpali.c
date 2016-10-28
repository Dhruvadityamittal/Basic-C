#include<stdio.h>
#include<math.h>
int main(){
long int num,n, number,rnum=0;
int i,res,digit=0,cd=0,check;
printf("enter  your number  \t");
scanf("%d",&num);
printf("your orignal no is=%d \n",num);
n=num;
number=num;
digit=num/10;

if(digit<1){
printf("\n please enter more then one digit number"); // one  digit no is itself a palindrome.
return 0;
}
else{
while(digit){             // counting the number of digits.
digit=num/10;
num=num/10;
cd=cd+1;                       // times  the loop gets executed the value of cd increases and therefore gets printed.
}
printf("Number is of %d digits:",cd);
}
while(cd){
res=n%10;
n=n/10;
printf("\n %d \t %d\t%d\t",res,n,cd);

rnum=rnum+(res*(pow(10,(cd-1))));   // logic for the palindrome
cd=cd-1;
}

printf("\n reverse Number  id %d",rnum);
check=number-rnum;
if(check){
printf("\n%d  your number is not a palindrome");
}
else{
printf("\n%d  your number is a palindrome");
}
return 0;
}

