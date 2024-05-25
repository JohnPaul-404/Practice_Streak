#include<stdio.h>
int main(){
    float number1, number2, result;
    printf("Enter Two Numbers : \n");
    scanf("%f%f", &number1, &number2);
    result = number1+number2;
    printf("The addition of entered numbers are : %f", result);
    return 0;
}