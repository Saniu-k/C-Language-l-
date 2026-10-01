#include <stdio.h>
int main  ()
{
    int max;
    int arr[5] = {1,4,5567,2,343};
    max=-1;//can also give max=arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}