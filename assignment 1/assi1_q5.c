#include<stdio.h>
int main(){
    printf("\n\nAlphabet checker : ");
    char f;
    printf("\nenter alphabet :");
    scanf("%c",&f);
    int g=f;
    if(65<=g<=117){
        printf("\nAlphabetic character");
        printf("\n%d",g);
        int result = f^32;
        printf("\nResult : %c",result);
    }
    else{
        printf("\nNon alphabet character");
    }
}