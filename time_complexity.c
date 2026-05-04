#include <stdio.h>
int main(){
    int n,i,j,count=0; 
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    printf("Single loop executed %d times(O(n))\n", count);
    for(i=0; i<n; i++){
            count++;
    }
   
    printf("Nested loop executed %d times(O(n^2))\n", count);

    count=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            count++;
        }
    }
    
    printf("LOG arithmetic loop executed %d times(O(log n))\n", count);

    count=0;
    for(i=0; i<n; i++){
        count++;
    }
    return 0;
}