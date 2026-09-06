#include <stdio.h>
int main (){
   int n,ld,r;
   r=0;
   printf ("Enter A Number:");
   scanf("%d",&n);
  while(n>0){
    ld=n%10;
    r=r*10;
    r=r+ld;
    n=n/10;
  }  
   printf ("the reverse of the number :%d",r);
   return 0;
}