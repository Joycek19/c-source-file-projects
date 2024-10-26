//program to find the compound interest
//preprocessor directive
#include<stdio.h>
#include<math.h>
int main(){
    float principle;
    float rate;
    float time;
    float amount;
    int n;

    printf("Enter principle:");
    scanf("%f",&principle);

    printf("Enter rate:");
    scanf("%f",&rate);

    printf("Enter time:");
    scanf("%f",&time);

    printf("Enter n:");
    scanf("%d",&n);

    amount = principle * pow(1+rate/(n), n*time);

    printf("The amount is ",amount);

  return 0;

}

