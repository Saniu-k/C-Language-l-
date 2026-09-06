#include <stdio.h>
int main ()
{
    int r=4;
    float pi=3.14;
    float ac=pi*r*r;
    float pc=2*pi*r;
    float vs=4*pi*r*r*r/3;
    float as=4*pi*r*r;
    printf("Area of Circle:%f\nPerimeter Of Circle:%f\nVolume Of Sphere:%f\nArea Of Sphere:%f\n",ac,pc,vs,as);
    return 0;
}