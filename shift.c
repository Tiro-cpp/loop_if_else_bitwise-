#include <stdio.h>
int main (){
	int num1=0;
	int num2=0;
	printf("enter a num");
	scanf("%d", &num1);
	printf("enter the shifting num");
	scanf("%d", &num2);
	int x = 1;
	x = x << num2;
	num1 = num1 | x ;
	printf("%d", num1);


	
return 0;






}
