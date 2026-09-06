#include <stdio.h>
int main (){
    int n,m;
    printf("enter no of rows:");
    scanf("%d",&n);
    printf("enter no of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){// no of rows
        for(int j=1;j<=m;j++){ //no of colunms
            printf("%d",j);
        }
        printf("\n");//har line ke bad ek enter dena hoga
    }
}