#include <stdio.h>
int main(){
    int a,b;
    printf("Enter A Numbers:");
    scanf("%d",&a);
    printf("Enter The Power:");
    scanf("%d",&b);
    int power = 1;
    for (int i=1;i<=b;i++){
        power = power * a;
    }
    printf("The result is: %d",power);
    return 0;
}