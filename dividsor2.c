#include <stdio.h>
int main (){
	int num1 =0;
	int num2 =0;
	printf("enter a num1-");
	scanf("%d", &num1);
	printf("num2-");
	scanf("%d", &num2);
	int i = 0;
	if(num1 > num2){
		i = num2;
	}else {
		i = num1;}

	
	for(  ; i > 0 ; --i){

		if(num1 % i== 0  && num2 % i== 0 ){
break;
}
}
	printf("%d", i );


}





