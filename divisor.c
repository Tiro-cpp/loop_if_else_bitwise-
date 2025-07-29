#include <stdio.h>
int main (){
	int num1 =0;
	int num2 =0;
	printf("enter a num 1-");
	scanf("%d", &num1);
	printf("num2");
	scanf("%d", &num2);
	int i = 0;

	for( i = 2; i <= num1; ++i){

			if(num1 % i == 0  &&  num2 % i == 0 ){
break;				}
			
	}	printf("%d", i);



return 0;



}
