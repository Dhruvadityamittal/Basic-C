#include<stdio.h>
int pass (int arr[],int num);
int main(){
int i,n,a[20];
printf("enter the number of elements for an array(less than 20):");
scanf("%d",&n);
printf("\n enter your number");
for (i=0;i<n;i++)
{
printf("\n value of a[%d] is :",i);
scanf("%d",&a[i]);
}
printf("\n address of array is %u",a);
pass(a,n);  
}
int pass(int arr[],num){
int i;
printf("\n passed value of array with address %u are",arr);
for(i=0;i<num;i++){
printf("\n value of arr[%d] is :%d",i,arr[i]);}
return ;
}
