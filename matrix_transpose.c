#include <stdio.h>
#include <stdlib.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    int *org = (int *)malloc(row * col * sizeof(int));
    int *trans = (int *)malloc(row * col * sizeof(int));

    if (org == NULL || trans == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter Element for [%d][%d]: ", i, j);
            scanf("%d",&org[i*col+j]);
        }
    }
    
    printf("\nThe Original Matrix is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",org[i*col+j]);
            trans[j*row+i] = org[i*col+j];
        }
        printf("\n");
    }

    printf("\nThe Transposed Matrix is:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ",trans[i*row+j]);
        }
        printf("\n");
    }

    free(org);
    free(trans);
    return 0;
}