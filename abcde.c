#include <stdio.h>
int main(){
	int num = 0;


	do  {
	printf(" pleas enter a assessment: ");
	scanf("%d", &num);
	}while (num > 100 || num < 0);






	if (num<100 && num > 90){
		printf("a class");
	}
	else if (num < 89  &&  num > 80 ){
		printf("b calss");
	}
	else if (num < 79 && num> 70){
		printf("c class");
	}
	else if (num < 69 && num > 60 ){
		printf("d class");
	}
	else if (num > 0 && num < 59){
		printf("e class");

	}
	


return 0;
}	








