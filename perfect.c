#include <stdio.h>
int main(){
	int num = 0;
	printf("enter a num :");
	scanf("%d",   &num);
	int tiv = 0;
	for(int i = 1; i < num ; ++i){
	
	if(num % i  == 0){
		tiv = tiv + i ; 
		}
	
	}
	if(tiv == num){
		printf("perfect");
	}else{
		printf("no perfect");}

return 0;
}



