//program to find the surface area of a cylinder
//preprocessor directive
#include<stdio.h>
int main(){
    int radius;
    int height;
    const float pie = 22/7;
    int surface_area;

    printf("Enter the radius:");
    scanf("%d",&radius);

    printf("Enter the height:");
    scanf("%d",&height);

   surface_area = pie*pow(radius,2) + 2*pie*radius*height;

   printf("The surface_area of the cylinder is",surface_area);

   return 0;

}
