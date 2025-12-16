#include<stdio.h>
int main(){
    unsigned int r = 0xaa;
    unsigned int a = 0x1c&r;
    printf("Values stored from bit 2 to 4 (Hex): %x",a);
    unsigned int b = 0x0c|r;
    printf("\nOriginal value : %x",r);
    printf("\nValue after writing values : %x",b);
}