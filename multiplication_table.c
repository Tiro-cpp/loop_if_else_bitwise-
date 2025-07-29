#include <stdio.h>
int main (){
	int res = 0;
	int x = 0;
	do {
		printf("please enter a num:-");
		scanf("%d", &x);

	}while(x < 0);

	while(res != 11){
		printf("%d * %d = %d\n", x , res ,  x * res  );      		
		
		
		++res;

}

return 0;



}
