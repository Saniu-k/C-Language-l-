#include <stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==1)
        printf("%d is a composite number",n);
    else
        printf("%d is a prime number",n);    
    return 0;
}