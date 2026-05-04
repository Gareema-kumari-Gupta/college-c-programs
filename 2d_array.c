#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];

    printf("Enter the elements of the 2D array:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter Element for [%d][%d]: ", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("The 2D array is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}