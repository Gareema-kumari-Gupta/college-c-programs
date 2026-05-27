#include <stdio.h>
#include <stdlib.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    int *arr = (int *)malloc(row * col * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter Element for [%d][%d]: ", i, j);
            scanf("%d",&arr[i*col+j]);
        }
    }
    
    printf("The Matrix is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i*col+j]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}