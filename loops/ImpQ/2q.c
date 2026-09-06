#include <stdio.h>
int main (){
   int n,ld,sum;
   sum=0;
   printf ("Enter A Number:");
   scanf("%d",&n);
  while(n>0){
    ld=n%10; // if u % a number by 10 it will give u its last digit
   sum=sum+ld; //i think u will get the gist of it if u see it by step.
    n=n/10;
  }

    
   printf ("the sum of the digits of the number :%d",sum);
   return 0;
}