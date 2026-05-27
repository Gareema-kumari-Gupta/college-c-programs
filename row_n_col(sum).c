#include <stdio.h>
#include <stdlib.h>
void display(int *ptr, int size){
    for(int i=0; i<size; i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
}

int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    int *arr = (int *)malloc(row * col * sizeof(int));
    int *rowsum = (int *)malloc(row * sizeof(int));
    int *colsum = (int *)malloc(col * sizeof(int));

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
            rowsum[i] += arr[i*col+j];
            colsum[j] += arr[i*col+j];
        }
        printf("\n");
    }

    printf("Row sums:\n");
    display(rowsum, row);

    printf("Column sums:\n");
    display(colsum, col);

    free(arr);
    return 0;
}