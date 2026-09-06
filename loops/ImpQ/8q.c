#include <stdio.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    int factorial =1; //n!=n*(n-1)*(n-2)*...*1
    while(n>0){
        factorial =factorial*n;
        n=n-1;
    }
    printf("Factorial of the given number is: %d", factorial);
    return 0;
}
