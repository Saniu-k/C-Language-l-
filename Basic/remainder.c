#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int r=a%b;               //here if a<b then out put will always be "a"
    printf("remainder of %d and %d is:%d",a,b,r);
    return 0;
    
}