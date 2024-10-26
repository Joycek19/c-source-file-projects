#include<stdio.h>
int main(){
    int n;
    int i;
    i=1;

    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("\nNumber\tcube\n");

    for(i=1; i<=5; i++){
    printf("%d\t%d\n",i,i*i*i);
    }
    while(i<=5);
    printf("%d\n",i);
    i++;

    do{
        printf("Enter the number of terms: ");
        scanf("%d",n);
        printf("The number is: %d\n",n);
    }
    while(n!=0);
    printf("exit the loop.\n");

return 0;
}
