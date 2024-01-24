#include <stdio.h>
int main(){
    printf("Enter a number:");
    int a;
    scanf("%d",&a);
    ((a%2!=0)&&(a<=200)&&(a>=100))?printf("True"):printf("False");
    return 0;
}