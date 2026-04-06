#include <stdio.h>
int sum(int x,int y){
	return x + y;}
int minus(int x,int y){
	if (x>y)
		return x-y;
	else
		return y-x;}
int mul(int x,int y){
	return x*y;}
float div(float x,float y){
	return y/x;}
int main(){
	int opt,a,b;
	char exit;
	do{
	
		printf("Enter 2 number: ");
		scanf("%d %d",&a,&b);
		printf("Available operations\n1.Addition\n2.Subtract\n3.multiplication\n4.Division\nChoose an Operation: ");
		scanf("%d",&opt);
	
		switch(opt){
		case 1:
			printf("sum of given 2 number is %d\n",sum(a,b));
			break;
		case 2:
			printf("difference of given 2 number is %d\n",minus(a,b));
			break;
		case 3:
			printf("multiplication  of given 2 number is %d\n",mul(a,b));
			break;
		case 4:
			printf("division of %d by %d is %.2f\n",b,a,div(a,b));
			break;
		default:
			printf("Invalid Option\n");
			break;
		}
		printf("Do you want do any other operation (y/n): ");
		scanf(" %c",&exit);
	}while(exit=='y'||exit=='Y');
	return 0;
}
