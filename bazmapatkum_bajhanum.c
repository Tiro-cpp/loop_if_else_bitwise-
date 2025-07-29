#include <stdio.h>
int main (){
	int num1 = 0;
	int num2 = 0;
	printf("enter a number");
	scanf("%d", &num1);
	printf("enter grade-");
	scanf("%d", &num2);
	int x = 0 ;
	int y = 0;
	x = num1 >> num2;
	printf("%d\n", x);

	y = num1 << num2;
	printf("%d\n", y);
return 0;
}
