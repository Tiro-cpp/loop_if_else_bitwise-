#include <stdio.h>
int main(){
	int num1=0;
	int num2=0;
	int num = 0;
	printf("enter number1-");

	scanf("%d", &num1);
	printf("enter number2-");
	scanf("%d", &num2);
	num = num1 ^ num2;

	num1 = num ^ num1;
	num2 = num ^ num2;
	printf("%d/n", num1);
	printf("%d/n", num2);


return 0;


}
