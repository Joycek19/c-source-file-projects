//c functions
#include <stdio.h>
#include<math.h>//built in function sin(), cos(), tan(),sqrt()

int sum(int x, int y);//function prototype
float divide(float a, float b);//function prototype

int main(){
    int x,a,b,z;
    int y;

    printf("Enter two values: ");
    scanf("%d%d",&a,&b);

    x = sum(15,40);//function calling
    z = sum(20,35);//function calling
    y = divide(13.0,52.0);//function calling

    printf("The sum is %d\n",x);
    printf("The 2nd sum is %d\n",z);
    printf("The division is %.2f\n",y);

return 0;
}
//function definition
int sum(int x, int y){
    int z;
    z = x + y;
return z;
}
//function definition
float divide(float a, float b){
    float c;
    c = a/b;
return c;
}
