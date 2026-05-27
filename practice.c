#include<stdio.h>
#include<stdlib.h>

struct book{
    char name[30];
    float price;
};

void display(struct book *p){
    printf("Book name: %s\n", p->name);
    printf("Book price: %.2f\n", p->price);
}

int main(){
    struct book *ptr;
    ptr=(struct book*)malloc(sizeof(struct book));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }else{
        printf("Enter book name: ");
        scanf("%s", ptr->name);
        printf("Enter book price: ");
        scanf("%f", &ptr->price);
        display(ptr);
    }
    free(ptr);
    return 0;
}