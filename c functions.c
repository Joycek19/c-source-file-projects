//c functions
#include <stdio.h>

int sum(int x, int y);//function prototype
float divide(float a, float b);//function prototype

int main(){
    int x;
    int y;
    x = sum(15,40);//function calling
    y = divide(13.0,52.0);//function calling

    printf("The sum is %d\n",x);
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
