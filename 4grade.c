#include <stdio.h>

int main (){
	int num = 0;
	printf("please enter a num:");
	scanf("%d", &num);
	int res = 16;
	int i =2;
	int x = 1;
	int tiv = 0;
	int nom = 0;
	while(res != 0 ){

		--res;
		if ( (num & x) ){
			++tiv;	}
		if(num & i ){
			++nom;}
		x = x << 2;
		i = i << 2;
}
	if ((tiv == 1) && (nom== 0 ) ){
		printf("this num is grade of four:");
	}else{
		printf("this num is nit grade of four:");
	}	
return 0;
}
