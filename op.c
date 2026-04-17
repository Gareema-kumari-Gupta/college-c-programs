#include <stdio.h>
// Display updated array
void display(int *ptr, int size) {
    for (int i = 0; i < size; i++) 
        printf("%d\t", ptr[i]);
    printf("\n");
}

int main() {
    int size, opt, pos, insert, add, end;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);

    int org[size], arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &org[i]);
    // Copy array
    for (int i = 0; i < size; i++) 
        arr[i] = org[i];
    
    printf("\nOriginal Array:\n");
    display(org, size);

        // Add at beginning
            printf("\nEnter a number to insert at the beginning: ");
            scanf("%d", &add);

            for (int i = size - 1; i >= 0; i--) 
                arr[i + 1] = arr[i];

            arr[0] = add;
             printf("\nAdding element at the beginning:\n");
            size++;
            display(arr, size);

        // Add at end
            printf("\nEnter a number to insert at the end: ");
            scanf("%d", &end);

            arr[size] = end;
            size++;
            printf("\nAdding element at the end:\n");
            display(arr, size);

        // Insert in between
            printf("\nEnter position (1 to %d): ", size + 1);
            scanf("%d", &pos);

            if (pos < 1 || pos > size + 1) {
                printf("Invalid position!\n");
            }else{

            printf("Enter a number to insert at the position %d: ",pos);
            scanf("%d", &insert);

            pos = pos - 1;

            for (int i = size - 1; i >= pos; i--) 
                arr[i + 1] = arr[i];
            
            arr[pos] = insert;
            size++;
            printf("\nAdding a elemnt in between:\n");
            display(arr, size);
            }

        // deleting a element through its place value 
            printf("Enter position to delete (1 to %d): ", size);
            scanf("%d", &pos);

            if (pos < 1 || pos > size) {
                printf("Invalid position!\n");
            }else{

            pos = pos - 1;

            for (int i = pos; i < size - 1; i++) 
                arr[i] = arr[i + 1];
                
            size--;
            printf("\nDeleting a element:\n");
            display(arr, size);
            }

    return 0;
}
