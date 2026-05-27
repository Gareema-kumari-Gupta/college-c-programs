#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int size, num, found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    ptr=(int*)malloc(size*sizeof(int));

    if(ptr==NULL){
        printf("\nMemory allocation failed\n");
        return 1;
    }

    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &num);

    for(int i=0; i<size; i++){
        if(ptr[i]==num){
            found=1;
            printf("\nElement found at position %d\n", i+1);
            break;
        }
    }

    if(found==0){
        printf("\nElement not found\n");
    }

    free(ptr);
    return 0;
}