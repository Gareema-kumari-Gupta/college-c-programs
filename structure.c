#include<stdio.h>
#include<stdlib.h>

struct student{
        int rollno;
        char name[20];
};

void display(struct student *ptr){
    printf("Rollno: %d\n",ptr->rollno);
    printf("Name: %s\n",ptr->name);
}

int main(){
    struct student *ptr;
    ptr=(struct student *)malloc(3*sizeof(struct student));

    if(ptr==NULL){
        printf("Memory not allocated");
        return 0;
    }else{
        struct student *s=ptr;
        for(int i=0;i<3;i++){
            printf("Enter rollno and name of student %d: ",i+1);
            scanf("%d",&s->rollno);
            scanf("%s",s->name);
            s++;
        }
        printf("\nDetails of students:\n");
        for(int i=0;i<3;i++){  
            display(&ptr[i]);
            printf("\n");
        }
    }
    free(ptr);
    return 0;
}