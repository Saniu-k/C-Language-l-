#include <stdio.h>
int main (){
    int n,a;
    printf("enter no of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}
//1
//13
//135
//1357