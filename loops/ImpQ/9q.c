#include <stdio.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        printf("%d!=%d\n",i,fact);
    }
    return 0;
}
// 1!=1
// 2!=2*1
// 3!=3*2*1 
// 4!=4*3*2*1
// .
// .
// n!=n*(n-1)*(n-2)*...*1