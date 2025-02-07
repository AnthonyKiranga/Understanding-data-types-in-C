#include <stdio.h>

int main(){

    const double pi = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of the circle: ");
    scanf("%lf", &radius);
    
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    
    printf("\ncircumference = %lf", circumference);
    printf("\narea = %lf", area);

    return (0);
}