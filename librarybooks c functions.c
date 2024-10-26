//fine for overdue library books

#include<stdio.h>
//function prototype
int x(int bookID,int dueDate,int returnDate,int fine_amount, int fine_rate,int overdue_days);

//functio calling
int main(){
    int bookID;
    int dueDate;
    int returnDate;
    int fine_amount;
    int fine_rate;
    int overdue_days;

    printf("Enter the bookID,dueDate,returnDate: ");
    scanf("%d%d%d",&bookID ,&dueDate ,&returnDate);

    overdue_days = returnDate - dueDate;

    printf("The overdue_days is: %d\n",overdue_days);

    if(overdue_days<=7){
        fine_rate = 20;
        fine_amount = overdue_days * 20;
        printf("fine_rate = %d\n",fine_rate);
        printf("The fine_amount is %d",fine_amount);
    }
    if(overdue_days>=8 && overdue_days<=14){
        fine_rate = 50;
        fine_amount = overdue_days * 50;
        printf("fine_rate = %d\n",fine_rate);
        printf("The fine_amount is %d",fine_amount);
    }
    else{
        fine_rate = 100;
        fine_amount = overdue_days * 100;
        printf("fine_rate = %d\n",fine_rate);
        printf("The fine_amount is %d",fine_amount);
    }

    return 0;

}
//function definition
int x(int bookID,int dueDate,int returnDate,int fine_amount,int fine_rate,int overdue_days){
    int c;

return c;
}
