#include<stdio.h>
int main(){
    int a,b,c[8];
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=0;i<8;i++){
        c[i]=0;
    }
    b=2;
    while(a!=0){
        for(int i=8;i>0;i--){
            c[i-1]=a%b;
            a=a/2;
        }
    }
    printf("\nBinary number :");
    for(int i=0;i<8;i++){
        printf("%d",c[i]);
    }
    int d;
    for(int i=0;i<8;i++){
        if(c[i]==1){
            d=d+1;
        }
    }
    printf("\n\nParity checker : ");
    if(d%2==1){
        printf("\nOdd parity ,setting MSB to 1");
        c[0]=1;
        printf("\nbinary number :");
        for(int i=0;i<8;i++){
            printf("%d",c[i]);
        }
    }
    if(d%2==0){
        printf("\neven parity");
        printf("\nbinary number :");
        for(int i=0;i<8;i++){
            printf("%d",c[i]);
        }
    }
}