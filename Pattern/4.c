#include <stdio.h>
int main (){
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //no of rows
        for(int j=1;j<=n+1-i;j++){ //no of columns
            printf("*");
        }
        printf("\n");//har line ke bad ek enter dena hoga
    }
}     
//*** 
//**
//*

    //   when if n=3 
    //   i=1, j=3
    //   i=2, j=2
    //   i=3, j=1  
    //               i+j= n+1
    //               j=n+1-i