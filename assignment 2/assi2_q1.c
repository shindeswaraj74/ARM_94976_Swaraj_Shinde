#include<stdio.h>
int main(){
    unsigned int r = 0x2A;
    printf("Original value : %8b\nhex value : %x",r,r);
    unsigned int a = 0x80;
    a=a>>3;
    r=r|a;
    printf("\nSet bit 4 : %8b\nhex value : %x",r,r);
    a=0x80;
    a=a>>6;
    r=r&~(a);
    printf("\nClear bit 1 : %8b\nhex value : %x",r,r);
    a=0x80;
    a=a>>2;
    r=r^a;
    printf("\nToggle bit 5 : %8b\nhex value : %x",r,r);
}