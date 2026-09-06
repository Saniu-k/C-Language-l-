#include <stdio.h>
int main (){ 
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){// no of rows
        for(int j=1;j<=i;j++){ //no of colunms
            printf("%d",j);
        }
        printf("\n");//har line ke bad ek enter dena hoga
    }
} 
 //1
 //12
 //123