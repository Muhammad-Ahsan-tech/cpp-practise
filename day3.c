#include<stdio.h>
int main()
{
    int percntage = ((437*100)/500);
    double realPer = (437.0/500.0)*100.0;
    printf("the avg is %d\n",percntage);
    printf("the real avg is :%.2f\n ",realPer);
    return 0;

}