/*program to add three number
   opt to show in output (variables/data)*/

#include<stdio.h>
int main(){

    int a;
    int b;
    int c;
    int sum;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    printf("enter the third number: ");
    scanf("%d",&c);

    sum = a + b + c;

    printf("The sum is %d\n",sum);

    return 0;

}
