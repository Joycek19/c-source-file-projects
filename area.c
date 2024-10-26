/*program to find the area of a rectangle
   length and width included(variables /data)*/
#include<stdio.h>
int main(){
    char formula;
    int l;
    int w;
    int product;

    printf("enter the formula to find the area: ");

    printf("enter the first number: ");
    scanf("%d",&l);

    printf("enter the second number: ");
    scanf("%d",&w);

    product = l * w;

    printf("the output is %d\n",product);

return 0;

}
