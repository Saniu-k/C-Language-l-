#include <stdio.h>
int main (){
   int n,ld,sum;
   sum=0;
   printf ("Enter A Number:");
   scanf("%d",&n);
  while(n>0){
    ld=n%10;
    if(ld%2==0){
    sum=sum+ld;
    }
    n=n/10;
  }

    
   printf ("the sum of the digits of the number :%d",sum);
   return 0;
}