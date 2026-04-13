#include<stdio.h>
int main(){
	int arr[4]={3,4,8,12},num=0,num1=0;
	for(int i=0;i<4;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nenter a number: ");
	scanf("%d",&num);
	int arrdup[5];
	for(int i=0; i<5;i++){
		arrdup[i]=arr[i];
	}
	arrdup[4]=num;
	for(int i=0;i<5;i++){
		printf("%d\t",arrdup[i]);
	}
	int myarr[6];
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
}
