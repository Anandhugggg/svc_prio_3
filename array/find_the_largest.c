// To find the largest element in an array
#include <stdio.h>

int largest(int a[],int n){
    int largest;
    for(int i=0;i+1<n;i++){
        if (a[i]>a[i+1]){
            largest = a[i];
        }else{
            largest = a[i+1];
        }
    }
    return largest;
}
int main(void){
    int a[] = {};
    int n = sizeof(a)/sizeof(a[0]);
    if(n==0){
        printf("the array is empty \n");
        return 0;
    }
    printf("the size is %d: \n",n);
    printf(" the largest element is: %d \n",largest(a,n));
    return 0;
}