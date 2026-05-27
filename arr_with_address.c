#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nValue with memory address:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: Value = %d, Address = %p\n", i + 1, arr[i], (void*)&arr[i]);
    }

    free(arr);
    return 0;
}