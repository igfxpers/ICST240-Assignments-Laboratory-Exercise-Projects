#include <stdio.h>

int main(){

	int counter = 1;

	printf("While Loop:\n");

	while(counter <= 100){
		if(counter%10 == 0)
			printf("%d\n",counter);
		else
			printf("%d\t", counter);

		counter++;
	}

	printf("\n\nFor Loop:\n");
	for(int count = 0; count < 1000; count++){
		if(count % 50 == 0)
			printf("\n");
		else
			printf("*");
	}

	int x = 0;
	printf("\n\nDo-While Loop:\n\n");
	do{
		printf("Do-While Loop Iteration # 0%d.\n",x + 1);
		x++;
	}while(x != 5);
	return 0;
}
