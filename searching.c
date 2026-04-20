#include <stdio.h>
// Display updated array
void display(int *ptr, int size) {
    for (int i = 0; i < size; i++) 
        printf("%d\t", ptr[i]);
    printf("\n");
}

int main() {
    int size, pos,search,place=9999;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
    printf("\nOriginal Array:\n");
    display(arr, size);

     //Searching an element
     printf("Enter a number you would like to look for: ");
     scanf("%d",&search);
     
     for(int i=0;i<size;i++){
     	if(search==arr[i])
     		place=i+1;
     }
     
     if(place==9999)
     	printf("%d element not found\n",search);
     else
     	printf("%d element found at position %d\n",search,place);

    return 0;
}
