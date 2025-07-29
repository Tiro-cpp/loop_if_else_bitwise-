#include <stdio.h>
int main (){
	char x = 0;
	printf("enter a character:");
	scanf("%c",  &x);
	int tiv = 32;

	if(x >= 'a' || x <='z'   ){
		x= x ^ tiv;	
		printf("%c", x);
	}else{
		x= x ^ tiv;
		printf("%c", x);
		}











return 0;

}
