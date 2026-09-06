#include <stdio.h>
int main(){
    int i=65;
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    while(i<=n){
        char ch=(char)i;
        printf("%c=%d\n",ch,i);
        i++;       
    }

    return 0;
}