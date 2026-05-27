#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,num,found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *ptr=(int*)malloc(size*sizeof(int));

    if(ptr==NULL){
        printf("\nMemory allocation failed\n");
        return 1;
    }

    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &num);

    // Sort the array using bubble sort

    for(int i=1;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(ptr[j-1]>ptr[j]){
                int temp=ptr[j-1];
                ptr[j-1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

    // Binary search

    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(ptr[mid]==num){
            found=1;
            printf("\nElement found at position %d\n", mid+1);
            break;
        }else if(ptr[mid]<num){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    if(found==0){
        printf("\nElement not found\n");
    }

    free(ptr);
    return 0;
}