#include <stdio.h>

int main(){
	int num = 0 ;
	int rev = 0;
	int x = 0;
	int tiv = 0;
	
	do {
                   printf("please enter a num:");
                   scanf("%d", &num) ;
         }while (num <= 10);
 
		tiv = num ;
         while (num !=  0){
  	       	 rev = num % 10;
                 x   = x * 10 + rev;
                 num = num / 10;
  
	         }
                
	
		 if (x == tiv){
			printf("this is a polindrom");
		}else {
			printf("this is not a polindrom");
		}
  

return 0;

}
