#include <stdio.h>
int main (){
	int num = 0;
	printf("enter a num:-");
	scanf("%d",&num);
	int tiv =1;
	int x = 32;
	int i = 0;
	while( x != 0 ){
		--x;
		if(num & tiv){
			++i;}
		 tiv = tiv << 1 ;
		}
	if (i == 1){
		printf("this is grade of two :");
	 }else{
		printf("this isnot grade of two:");
	}



	
	
	
	


	
return 0;


}
