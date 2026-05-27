#include<stdio.h>
#include<stdlib.h>
void display(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
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

    printf("\nBefore reversing:\n");
    display(arr, size);

    for(int i=1;i<=size/2;i++){
        int temp = arr[i-1];
        arr[i-1] = arr[size-i];
        arr[size-i] = temp;
    }

    printf("\nAfter reversing:\n");
    display(arr, size);

    free(arr);
    return 0;
}