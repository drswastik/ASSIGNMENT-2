#include<stdio.h>
int main(){
    printf("Enter total number of days:\n");
    int a;
    scanf("%d",&a);
    int c =(int)a/365;
    int d = c*12;
    printf("Years:%d",c);
    int b;
    b=(a%365)/30;
    printf("\nMonths:%d",b);
    int g = (a-((c*365)+(b*30)))/7;
    int e = g%7;
    printf("\nWeeks:%d",g);
    printf("\nDays:%d", e);
    return 0;

}