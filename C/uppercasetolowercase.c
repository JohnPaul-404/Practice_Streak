#include <stdio.h>
int main(){
    char ch, u;
    printf("Enter a uppercase character: ");
    scanf("%c", &ch);
    //The ASCII value of the input character is converted to its lowercase equivalent. In ASCII, the difference between the lowercase and uppercase characters is 32. So, adding 32 from the ASCII value of a uppercase character gives the ASCII value of its lowercase equivalent
    u=ch+32;
    printf("%c",u);
}