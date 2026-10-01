#include <stdio.h>
int main (){
    int a[4]={2,4,6,3};
    for(int i=0;i<=4;i++){
     printf("Enter the %d number\n",i);   
     scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--){
    printf("%d",a[i]);
    }
    return 0;
}