#include <stdio.h>
int main (){
	int num = 0;
	printf("please enter a num :");
	scanf ("%d", &num);
	/* int res = 0;
	int tiv = 0;
	tiv = num ;
	while(tiv != 0){
		res = num % tiv;
		if (res == 0 ){
			printf("%d\n", tiv);}
		--tiv;
		

}*/

	for (int i = 1; i <= num; ++i) {
		if (num % i == 0) printf("%d\n", i);
}
return 0;


}
