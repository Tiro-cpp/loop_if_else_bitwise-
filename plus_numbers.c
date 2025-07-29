#include <stdio.h>
int main (){
	int num = 0;
	int x = 0; 
	int i = 0;

	printf("please enter a number: ");
	scanf("%d", &num);



	while(num != 0){
	x = num % 10 ;
	i = i + x;
	num = num / 10;

	
}
	printf("%d", i );

return 0;

}



