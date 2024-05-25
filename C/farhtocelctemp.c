#include<stdio.h>
int main(){
    float far, cel;
    printf("Enter temprature in Farenheit : \n");
    scanf("%f", &far);
    cel = (far-32)*5/9;
    printf("The temrature in celsius is : %f", cel);
    return 0;
}