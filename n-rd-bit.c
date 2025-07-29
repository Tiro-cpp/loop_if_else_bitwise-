#include <stdio.h>
int main (){
	int num1 = 0;
	int num2 = 0;
	printf("enter a num ");
	scanf("%d", &num1);
	printf("enter a shifting num");
	scanf("%d", &num2);
	int x =1;

	x = x << num2;

	if (num1 & x){
		printf("it is 1");
	}else {
		printf("its is not 1 ");
	}


return 0;






}



