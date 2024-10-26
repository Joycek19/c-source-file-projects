//program to find the volume of a cylinder
//preprocessor directive
#include<stdio.h>
int main(){
    int height;
    int radius;
    const float pie = 22/7;
    int volume;

    printf("The height is:");
    scanf("%d",height);

    printf("The radius is:");
    scanf("%d",radius);

    volume = pie*pow(radius,2)*height;

    printf("The volume is",volume);

return 0;

}
