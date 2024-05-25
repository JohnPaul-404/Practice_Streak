#include <stdio.h>
int main(){
    char ch;
    int no;
    printf("Enter character to be turned to uppercase : \n");
    scanf("%c", &ch);
    //The ASCII value of the input character is converted to its uppercase equivalent. In ASCII, the difference between the lowercase and uppercase characters is 32. So, subtracting 32 from the ASCII value of a lowercase character gives the ASCII value of its uppercase equivalent
    no = ch-32;
    printf("%c",no);
    return 0;
}