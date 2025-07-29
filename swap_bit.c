#include <stdio.h>
int main (){
	int num1=0;
	int num2=0;
	int num=0;
	int j=0;
	int i=0;
	printf("enter num ");
	scanf("%d", &num);
	printf("bit1-");
	scanf("%d", &i);
	printf("bit2-");
	scanf("%d", &j);

	num1 = num & 1 << i;
	num2 = num & 1 << j;

	if (num1 == num2){
		return 0;
	}else{
		num = num ^ 1 << i;
		num = num ^ 1 << j;
		printf("%d", num );
		}

return 0;

}
