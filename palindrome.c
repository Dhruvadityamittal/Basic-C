#include<stdio.h>
#include<string.h>

char wordcat(char x[100],char y[100]){

int xlast=0, ylast=0;

while(x[xlast]!='\0')
{
xlast++;
}
while(y[ylast]!='\0'){

x[xlast]=y[ylast];

ylast++;

xlast++;

}
x[xlast]='\0';
return x[xlast];
}

int wordlen(char word[100]){
int x=0;
while(word[x]!='\0'){
x++;
}
return x;
}

int wordcmp(char x[100],char y[100]){
int result=0;
int length=0;
while(x[length]!='\0' || y[length]!='\0'){
if(x[length]==y[length]){
}
else{
result=1;
break;
}
length++;
}
return result;
}

int main(){

int i,l, result;
char word[100],rev[100];

printf("\n word palindrome program\n enter your wrd:");

scanf("%s",word);

l=wordlen(word);

for(i=l;i>0;i--){
rev[l-i]=word[i-1];
}
rev[l]='\0';
printf("reverse of your word is : %s",rev);
result=wordcmp(word,rev);

if(result==0)
printf("\n\n%s is  a palindrome",word);
else
printf("\n\n %s is not a palindrome",word); 

wordcat(word,rev);
printf("\n%s",word);
return 0;
}
