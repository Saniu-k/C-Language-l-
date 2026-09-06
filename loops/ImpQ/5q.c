#include <stdio.h>
int main (){
   int n,ld,r,sum,sro,a;
   r=0;
   sum=0;
   printf ("Enter A Number:");
   scanf("%d",&n);
   a=n;
  while(n>0){
    ld=n%10;
    r=r*10;
    r=r+ld;
    n=n/10;
    sum =sum+ld;
  }
  sro=a+r;  
   printf ("the reverse of the number :%d\nthe sum of its digits is:%d\nthe sum of the reverse and original:%d",r,sum,sro);
   return 0;
}