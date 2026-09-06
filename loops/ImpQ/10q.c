#include <stdio.h>
int main (){
    //fibonnaci series
    int n,a,b,sum;
    a=1;
    b=1;
    printf("Enter A Number:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
         printf("The  fibonacci number is : %d\n",sum);
    }
   
    return 0;
}