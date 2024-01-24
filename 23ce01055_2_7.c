#include<stdio.h>
#include<math.h>
int main(){
    float mc;
    printf("Enter the mealcost:");
    scanf("%f",&mc);
    int tp;
    printf("Enter tip percentage:");
    scanf("%d",&tp);
    int txp;
    printf("Enter tax percentage:");
    scanf("%d",&txp);
    float txp1,tp1;
    txp1=txp*0.01*mc;
    tp1=tp*0.01*mc;
    printf("Total meal cost=%f",round(mc+txp1+tp1));
    return 0;
}