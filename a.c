#include<stdio.h>
float areaofcircle(float r);
void main()
{
    float r;
    float p;
    printf("enter radius");
    scanf("%f",&r);
    p=areaofcircle(r);
    printf("area is %f",p);

}
float areaofcircle(float k)
{
    float a;
    a=3.14*k*k;
    return a;
}
