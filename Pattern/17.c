#include <stdio.h>
int main (){
   int n,a,d;
   printf("Enter the number of rows:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    a=1;
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        d=64+a;
        char ch=(char)d;
        printf("%c",ch);
        a++;
    }
    printf("\n");
   }
   

   return 0;
}