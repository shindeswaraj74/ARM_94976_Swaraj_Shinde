#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d\n%d",&a,&b);
    printf("\nA : %d\nB : %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n\nSwapped numbers");
    printf("\nA : %d\nB : %d",a,b);
}