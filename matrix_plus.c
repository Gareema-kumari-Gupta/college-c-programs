#include <stdio.h>
#include <stdlib.h>
int *input(int *row, int *col){
    printf("Enter the number of rows and columns: ");
    if(scanf("%d %d", row, col) != 2){
        return NULL;
    }
    int *arr = malloc((*row) * (*col) * sizeof(int));
    if(!arr){
        return NULL;
    }

    printf("Enter the elements of the 2D array:\n");
    for(int i = 0; i < *row; i++){
        for(int j = 0; j < *col; j++){
            printf("Enter Element for [%d][%d]: ", i, j);
            scanf("%d", &arr[i * (*col) + j]);
        }
    }
    return arr;
}
int main(){
    int rowA, colA, rowB, colB;
    int *A, *B;
    printf("Matrix A:\n");
    A = input(&rowA, &colA);
    if(!A) return 1;
    printf("\nMatrix B:\n");
    B = input(&rowB, &colB);
    if(!B) return 1;
    
    if(rowA != rowB || colA != colB){
        printf("Matrices must have the same dimensions for addition.\n");
        return 1;
    }else{
        int row = rowA;
        int col = colA;
        int *result = malloc(row * col * sizeof(int));
        if(!result) return 1;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                result[i * col + j] = A[i * col + j] + B[i * col + j];
            }
        }
        
        printf("\nResult of Matrix Addition:\n");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                printf("%d ", result[i * col + j]);
            }
            printf("\n");
        }
        free(result);
        free(A);
        free(B);
    }
}