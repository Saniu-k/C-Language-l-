#include <stdio.h>
int main (){
   int n;
   int count =0;
   

   printf ("Enter A Number:");
   scanf("%d",&n);
   for(int i=1; n>0; i++){
       n=n/10;
       count++;
    }
    
   printf ("%d are the number of digits in number",count);
   return 0;
}