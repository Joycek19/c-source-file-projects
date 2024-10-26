//implementation of a grading system for students
#include<stdio.h>
int main(){
    int Maths;
    int Physics;
    int English;
    int total;
    float average;

    printf("Enter the marks for Maths,Physics,English: ");
    scanf("%d%d%d",&Maths ,&Physics ,&English);

    total = Maths+Physics+English;

    printf("The total is : %d\n",total);

    average = total/3;

    printf("The average is: %f\n",average);

    if(average>=70){
        printf("The grade is A");
    }
    if(average>=60 && average<=69){
        printf("The grade is B");
    }
    if(average>=50 && average<=59){
        printf("The grade is C");
    }
    if(average>=40 && average<=49){
        printf("The grade is D");
    }
    else{
        printf("The grade is E(fail)");
    }

return 0;
}
