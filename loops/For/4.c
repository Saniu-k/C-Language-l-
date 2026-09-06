#include <stdio.h>
int main (){
    for(int i=1;i<=100;i++){
        if(i%2==0){
        continue; //skips the round of the loop if the number is even
    }
        printf("%d ",i);
    }
}