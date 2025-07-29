#include <stdio.h>
int main (){
	int num1= 0;
	int num2 =0;
	int num3 =0;
	printf("please enter the numbers:\n");
	printf("num1-");
	scanf("%d",&num1);
	printf("num2-");
	scanf("%d", &num2);
	printf("num3-");
	scanf("%d", &num3);


	num1 = num1 * 100;
	num2 = num2 * 10;
	num3 = num3 *1;
	printf("%d", num1+num2+ num3     );



return 0;
}
