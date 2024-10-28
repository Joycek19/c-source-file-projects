//structure book
#include<stdio.h>
#include<string.h>//strcpy
struct book {
    char title[30];
    char author[30];
    char ISBN[13];
    int publication_year;
    float price;
}
book1, book2;
int main(){
strcpy(book1.title,"There Are No Saints");
strcpy(book1.author,"Sophie Lark");
strcpy(book1.ISBN,"9781728294247");
book1.publication_year = 15-10-2021;
book1.price = 800.50;

    printf("title:%s\n",book1.title);
    printf("author:%s\n",book1.author);
    printf("ISBN:%s\n",book1.ISBN);
    printf("publication_year:%d\n",book1.publication_year);
    printf("price:%.2f\n",book1.price);

return 0;
}
