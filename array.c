#include<stdio.h>
int display(int *ptr,int size){
	printf("\nupdated array\n");
	for(int i=0;i<size;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
}

int main(){
	int arr[]={3,4,8,12},opt=0; 
	
	printf("Origional\n");
	  int size=sizeof(arr)/sizeof(arr[0]);
	  for(int i=0;i<size;i++){
		  printf("%d\t",arr[i]);
	  }

printf("which operation would you like to do?\n1.Add element in beginning\n2.Add element in the end\n3. Insert a element in between\n choose an option: ");
scanf("%d",&opt);
	


switch(opt){
  case 3:	
    
    //to add a element in between
    
	 
	  printf("\n");
	  int pos=1;
  	for(int i=size;i>=pos;i--){
		  if(i==1){
			  arr[2]=6;
		  }else{
			  arr[i+1]=arr[i];
		  }
	  }
	  size+=1;
	  display(arr,size);
	  printf("\n");

    break;
	
	
  case 1:
    
    //to add a element in the beginning of the array

	  for(int i=size;i>=0;i--){
		  arr[i+1]=arr[i];
	  }
	  arr[0]=10;
	  size+=1;
  	display(arr,size);

    break;
	

  case 2:	
    
    //to add an element in the end

	  arr[size]=64;
	  size+=1;
	  display(arr,size);

    break;

  default:
    printf("Invalid option\n");

    break;
  }
}
