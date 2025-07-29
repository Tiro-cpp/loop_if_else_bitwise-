#include <stdio.h>
int main (){
	int  num = 0;
	int  rev = 0 ;
	int    x = 0;
	do {
		printf("please enter a num(num > 12):");
		scanf("%d", &num) ;
	}while (num < 12);
		
	while (num !=  0){
			
		
		rev = num % 10;
                x   = x * 10 + rev;
		
		num = num / 10;

	}
 		printf ("%d", x );	

return 0;

	}
