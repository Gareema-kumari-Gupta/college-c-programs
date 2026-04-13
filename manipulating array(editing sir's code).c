#include<stdio.h>
int display(int *ptr,int size){
	printf("\nupdated array\n");
	for(int i=0;i<size;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
}

int main(){
	int arr[]={3,4,8,12};
	
	//to add a element in between
	
	printf("before insertion\n");
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int pos=1;
	for(int i=size;i>=pos;i--){
		if(i==1){
			arr[2]=6;
		}else{
			arr[i+1]=arr[i];
		}
	}
	display(arr,size+1);
	printf("\n");
	
	//to add a element in the beginning of the array
	
	for(int i=size;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=10;
	display(arr,size+2);
	
	//to add an element in the end
	
	arr[size+2]=64;
	display(arr,size+3);
}
