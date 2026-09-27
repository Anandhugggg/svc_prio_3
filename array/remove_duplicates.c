//remove duplicates
#include <stdio.h>

void remove_duplcates(int a[],int n){
    int i,b,c;

    for(i=0;i<n;i++){
        for(b=i+1;b<n;b++){
            if (a[i]== a[b]){
                for(c=b;c<n-1;c++){
                    a[c] = a[c+1];
                }
                n--;
                b--;
            }
        }
    }
    printf("the array is : \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
}
int main(void){
    int a[] = {1,1,1,1,2};
    remove_duplcates(a,sizeof(a)/sizeof(a[0]));
    return 0;
}