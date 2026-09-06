#include <stdio.h>
int main (){
    int x=5;
    printf("%d\n",x++); // x++ ==> x=x+1, ++x ==> x=x+1
    printf("%d",++x); // but the diffrent between x++ and ++x is that in 
                        //x++ the value of x is printed first and then it is incremented but in ++x the value of x is incremented first and then it is printed
                        //same with x-- and --x
    return 0;
}