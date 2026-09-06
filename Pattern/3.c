#include <stdio.h>
int main (){
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //no of rows
        for(int j=1;j<=i;j++){ //no of columns
            printf("*");
        }
        printf("\n");//har line ke bad ek enter dena hoga
    }
}     
//*
//**
//***

      
//    here i=1 in the beginning and j=1
//    and j<=i, so one star prints and the loop goes
//    j becomes 2 and j<=i will not works since i is still 1,
//    now the loop comes back to the outer loop and 
//    i becomes 2, now j again becomes 1
//    cause the inner loop starts from j=1 again
//    and j<=i, since i=2 and j=1, one star prints,
//    then j becomes 2 since is still 2 condition j<=1 works 
//    another star prints, and j becomes 3, now j<=i will not work 
//    since i is still 2, now the loop comes back to the outer loop and i becomes 3, 
//    now j again becomes 1 this continues until i becomes n, 
//    and the inner loop prints stars equal to the value of i in each
//    iteration of the outer loop.
