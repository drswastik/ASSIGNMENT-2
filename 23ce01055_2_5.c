#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf(a&1==1?"It is an odd number":"It is an even number");
    return 0;
}