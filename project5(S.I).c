//program to find the simple interest
//preprocessor directive
#include<stdio.h>
int main(){
    int principle_amount;
    int rate;
    int time;

    printf("Enter the principle_amount:");
    scanf("%d",&principle_amount);

    printf("Enter the rate:");
    scanf("%d",&rate);

    printf("Enter the time:");
    scanf("%d",&time);

    printf("Enter the (principle_amount*rate*time)\100:");
    scanf("%d%d%d",&principle_amount,rate,time);

    return 0;
}
