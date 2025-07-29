#include <stdio.h>
int main (){
	int x = 0;
	int y = 0;
	int num = 0;
	num = 1;
	int res = 0;
	do {
		printf("please enter a number:-");
		scanf("%d", &x);
		printf("enter power a number-");
		scanf("%d", &y);
	}while (x < 0 || y < 0);


	while(y != 0){
		num = num * x;
		
		 --y ;
	}
	printf("result is-");	
	printf("%d\n", num);

return 0;
}

