#include <stdio.h>
// Display updated array
void display(int *ptr, int size) {
    for (int i = 0; i < size; i++) 
        printf("%d\t", ptr[i]);
    printf("\n");
}

int main() {
    int size, pos;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
    printf("\nOriginal Array:\n");
    display(arr, size);

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
}
