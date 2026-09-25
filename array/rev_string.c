// This is to reverse a string literal.
#include <stdio.h>
#include <string.h>

void rever_str(char *str, int n){
    char *start = str;
    char *s = str;
    char *end = s+n-1;

    while (start < end){
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
    printf("the string is = %s \n", str);
}
int main(void){
    char s[]="ssggff";
    rever_str(s,strlen(s));
    return 0;
}