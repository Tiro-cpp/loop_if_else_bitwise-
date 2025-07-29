#include <stdio.h>
   int main (){
           int x = 0 ;
           int y = 0 ;
           int z = 0;
           do {
           printf("please intput a  num1- ");
           scanf("%d", &x);
           printf("num2-");
           scanf("%d", &y);
          }while (x>y);
 
  
         if(x & 1){
 
                    x = x +1;
                    while(x <= y){
                    z = z + x;
                    x = x +2;
  
                  }
          printf("%d", z);
          }else{
  
                  while(x <= y){
                  z = z + x ;
                  x = x +2;
 
                 }
                 printf("%d", z);
                  }
  
  return 0;
  }

