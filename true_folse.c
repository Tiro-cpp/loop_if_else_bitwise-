#include <stdio.h>
int main (){
	char sym = 0 ;
	printf("please enter a value: ");
	scanf(" %c", &sym);
	if  (sym >= 48 && sym <= 57){
		printf("true\n");	
	}
	else {
		printf("false\n");
	}
return 0;
}
