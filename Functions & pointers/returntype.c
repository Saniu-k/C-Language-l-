#include <stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("1.");
    scanf("%d",&a);
    printf("2.");
    scanf("%d",&b);
    int sum = add(a,b);