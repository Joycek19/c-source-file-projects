//structures
#include<stdio.h>
#include<string.h>//strcpy
struct student {
    char name[50];
    char reg_no[50];
    char email[50];
    int phone_no;
    int ID;
    float marks;
}
student1, student2;
int main(){
strcpy(student1.name,"JoyceKariuki");
strcpy(student1.reg_no,"BCS-05-0114/2024");
strcpy(student1.email,"kariukijoyce@gmail.com");
student1.phone_no = 705825045;
student1.ID = 716283117;
student1.marks = 95.5;

    printf("name:%s\n",student1.name);
    printf("reg_no:%s\n",student1.reg_no);
    printf("email:%s\n",student1.email);
    printf("phone_no:%d\n",student1.phone_no);
    printf("ID:%d\n",student1.ID);
    printf("marks:%f",student1.marks);

return 0;
}
