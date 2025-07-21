#include <stdio.h>
int main(){

	int score = 0;
	int passed = 0;

	printf("Enter your exam score");
	scanf("%d", &score);

	passed = (score >= 50);
	if(passed)
		printf("You passed");
	else
		printf("You didnt passed");
}
