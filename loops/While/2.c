#include <stdio.h>
int main(){
   
    int j;
    printf("%d ",j);
    //here if the value of j is not given a random number
    // will be alloted in this case
    //that number is called garbage value
    while(j<=10){
        printf("%d ",j);
        j=j+1;
    }
    return 0;
}