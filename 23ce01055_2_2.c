#include <stdio.h>
int main(){
    printf("Enter Three Numbers:");
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    ((a>b)&&(a>c))?printf("Max number is %d\n",a):printf("Proceeding with the program\n");
    d=a;
    a=b;
    b=d;
    (a>c)?printf("Max number is %d\n",a):printf("Max number is %d\n",c);
    return 0;
}