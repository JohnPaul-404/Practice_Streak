#include <stdio.h>

int main() {
    float area, circumference, radius;
    printf("Enter Radius of Circle : \n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of the Circle is %f \n Circumference of the Circle is %f\n", area, circumference);
    return 0;
}
