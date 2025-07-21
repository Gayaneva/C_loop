#include <stdio.h>

int main(){
	int temp = 0;
	int is_cold = 0;
	
	printf("Enter a temperature");
	scanf("%d",&temp);
	
	is_cold = (temp < 15);
	
	if(is_cold)
		printf("It is cold \n");
			
	else
		printf("It is not cold \n");
}
