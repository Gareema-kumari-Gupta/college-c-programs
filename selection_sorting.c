#include<stdio.h>
// Display updated array
void display(int *ptr, int size) {
    for (int i = 0; i < size; i++) 
        printf("%d\t", ptr[i]);
    printf("\n");
}

int main() {
    int size,opt;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
     	
     // sorting
	 
	 printf("Enter 1 for ascending order, 2 for descending order: ");
	 scanf("%d",&opt);
     
	 switch(opt){
	 	case 1:
            printf("\nBefore Sorting:\n");
     		display(arr,size);

            for(int i = 0; i < size; i++) {
                int min = i;
    			for(int j = i+1; j < size; j++) {
                    if(arr[j] < arr[min]) {
                        min = j;
                    }
                }
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }

            printf("\nAfter Sorting it in ascending order:\n");
			display(arr,size);

            break;
        case 2:
            printf("\nBefore Sorting:\n");
     		display(arr,size);  

            for(int i = 0; i < size; i++) {
                int min = i;
    			for(int j = i+1; j < size; j++) {
                    if(arr[j] > arr[min]) {
                        min = j;
                    }
                }
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }

            printf("\nAfter Sorting it in descending order:\n");
			display(arr,size);
            break;
        default:
            printf("Invalid option\n");
    }
    return 0;
}