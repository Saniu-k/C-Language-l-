#include <stdio.h>
#include <math.h>
int main ()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int root= sqrt(a);
    int power= pow(a,a);
    printf("%d\n%d",root,power);
    return 0;
}