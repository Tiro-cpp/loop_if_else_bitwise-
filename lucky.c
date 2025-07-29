#include <stdio.h>
int main (){
	int num = 0;
	printf("enter a num :");
	scanf("%d", &num);
	int tiv =0;
	int i = 0;
	while(num != 0){
	tiv = num % 10;
	

	if(tiv != 7 && tiv != 4){
		++i ;
	}
	num = num / 10;		
}
	if (i == 0){
		printf(" lucky");
	}else{
		printf("no lucky");}


return 0;
}

