#include <stdio.h>
int main (){
    int n;
  printf("Enter a number:");
  scanf("%d",&n);
  //1-2+3-4+5...too n terms
  int sum =0;
    if(n%2==0) sum =-(n/2);
    else sum = -(n/2)+n;
  printf("The sum of the series is: %d", sum);
   return 0;
}