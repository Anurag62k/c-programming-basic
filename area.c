#include<stdio.h>
#define PI 3.1416
int main() {
    float radius,area;
    printf("enter the radius of the circle");
    scanf("%f",&radius);
    area = PI* radius* radius;
    printf("area of the circle is :%.2f",area);
    return 0;

}

