//arrays
#include<stdio.h>

int main(){
    int i;
    int j;
    int k;

    int marks [2][2][3]={
    {20,15,35},
    {10,20,30},
    {
     {40,50,60},
    {30,90,80}}
    };

    for(i=0;i<2;i++){

    }
    for(j=0;j<2;j++){

    }
    for(k=0;k<3;k++){
    printf("marks[%d][%d][%d] = %d\n",i,j,k,marks[i][j][k]);

    }
return 0;
}
