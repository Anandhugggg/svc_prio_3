// Reverse an array in place

#include <stdio.h>
#include <string.h>

void rever_array(char arr[],int n){
    int start = 0;
    int end = n-1;

    while (start < end){
        char tmp = arr[end];
        arr[end] = arr[start];
        arr[start] = tmp;
        start++;
        end--;
    }
    printf(" The reversed array is = %s \n",arr);
}

int main(void){
    char c[] = "ADCCCSSSSSSF";
    int length = strlen(c);
    rever_array(c, length);
    return 0;
}