#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,min=0,max=0;

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

    printf("The elements of the array are: ");
    for(int i = 0; i < size; i++) {
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
        printf("%d ", arr[i]);
    }
    printf("\nMinimum element: %d\nMaximum element: %d\n", min, max);
    free(arr);
    return 0;
}