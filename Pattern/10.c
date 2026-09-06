#include <stdio.h>
int main (){
    int n,a,b;
    printf("enter no of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        a=1;
        b=1;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d",b);
                b++;
            }
           else{
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
           }
        }
        printf("\n");
    }
    return 0;
}