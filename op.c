#include<stdio.h>
int main(){
	int arr[4]={3,4,8,12},num=0,num1=0,int myarr[6],int arrdup[5];

	//to print all the elemnents in the array 
	
	for(int i=0;i<4;i++){
		printf("%d\t",arr[i]);
	}

	// to print 3rd element

	printf("3rd element of the array is %d\n",arr[2]);

	// to add a element at the end of an array
	printf("\nenter a number: ");
	scanf("%d",&num);
	
	for(int i=0; i<5;i++){
		arrdup[i]=arr[i];
	}
	arrdup[4]=num;
	for(int i=0;i<5;i++){
		printf("%d\t",arrdup[i]);
	}

	//  to add a element in between
	
	printf("\nenter another number: ");
	scanf("%d",&num1);
	for(int i=0;i<6;i++){
		if(i<2){
			myarr[i]=arrdup[i];
		}else{
			myarr[i+1]=arrdup[i];
		}
	}
	myarr[2]=num1;
	for(int i=0; i<6;i++){
		printf("%d\t",myarr[i]);
	}
	printf("\n");

	// to add the element at the beginning

	printf("\nenter a number: ");
	scanf("%d",&num);
	for(int i=0;i<4;i++){
		myarr[i+1]=arr[i];
	}
	myarr[0]=num;
	for(int i=0;i<5;i++){
		printf("%d\t",myarr[i]);
	}
	printf("\n");
}
