#include <stdio.h>

int main(){
	int age = 0;
	int can_vote  = 0;

	printf("Enter your age");
	scanf("%d", &age);

	can_vote = (age >= 18);
	if(can_vote)
		printf("You can vote");
	else
		printf("You can't vote");
}
