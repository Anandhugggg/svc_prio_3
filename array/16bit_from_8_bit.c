// reading a 16bit value from a an offset to  a uint_8 buffer
#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

bool read_uint16(uint8_t a[],size_t n, size_t offset, uint16_t *value){
    if(offset > n | n-offset > 2){
        return false;
    }
    *value = (uint16_t)a[offset] | (uint16_t)(a[offset+1] << 8);
    return true;
}
int main(void){
    uint8_t a[] = {0x11,0x32,0xFF,0xFB};
    uint16_t value;
    if(read_uint16(a,sizeof(a)/sizeof(a[0]),2,&value)){
        printf("value is %04x\n",value);
    }else{
        printf("error\n");
    }
    return 0;
}