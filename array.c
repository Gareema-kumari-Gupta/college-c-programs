#include<stdio.h>

int origional(int *ptr,int size){

	printf("Origional\n");
	for(int i=0;i<size-1;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
}

int display(int *ptr,int size){
	
	printf("\nupdated array\n");
	for(int i=0;i<size;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n\n");
}

int main(){
	int size=0,opt=0,pos=0,insert=0,add=0, end=0;
	
	// to add new element 
	
	printf("How many numbers would you like to enter?");
	scanf("%d",&size);
	
	int arr[size],org[size];
	
	for(int i=0;i<size;i++){
		scanf("%d",&org[i]);
	}
	
		
	for(int i=0;i<size;i++){
		arr[i]=org[i];                                            // duplicating the array
	}
	
	printf("choose a option:\n1.add the element in the beginning\n2.add the element in the end\n3.insert element in the between\nwhat would you like to do? ");
	scanf("%d",&opt);
	
	
	switch(opt){
	
	case 3:                                                                                                 //to add a element in between

		printf("where you like to insert a number? ");
		scanf("%d",&pos);
		printf("enter a number: ");
		scanf("%d",&insert);
	
		for(int i=size;i>=pos;i--){
			if(i==(pos-1)){
				arr[pos]=insert;
			}else{
				arr[i+1]=arr[i];
			}
		}
		size+=1;
		origional(org,size);
		display(arr,size);
		printf("\n\n");
		
		break;
	
	case 1:                                                                               //to add a element in the beginning of the array
	
		printf("enter a number: ");
		scanf("%d",&add);
	
		for(int i=size;i>=0;i--){
			arr[i+1]=arr[i];
		}
		arr[0]=add;
		size+=1;
		origional(org,size);
		display(arr,size);
		
		break;
	
	case 2:                                           //to add an element in the end
	
		printf("enter a number: ");
		scanf("%d",&end);
	
		arr[size]=end;
		size+=1;
		origional(org,size);
		display(arr,size);
		
		break;
		
	default: 
		printf("INVALID OPTION");
		break;
	}
}
