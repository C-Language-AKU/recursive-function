#include <stdio.h>

/************************************************************************/
/**** Example: counting from 0 till we get to a certain number. ****/
/************************************************************************/


//Iterative Method:

void iterative(int num){ //In the iterative method we use loops to repeat the whole process.
	for(int count=0; count<=num; count++){ //In this example the loop is used to print everytime the value starting from 0 till it becomes the value the user gave to the program.
		printf("%d\n", count);
	}
}

//Recursive Method:

void recursive(int num){ //In therecursive method we just use conditions so we can stop the process at a certain point.
	if(num>=0){
		recursive(num-1); //If the condition is satisfied the function calls itself again but in a different value each time.
		printf("%d\n", num); //then prints the value.
	}
}

//Main Program:
int main(){

	int countStartPoint;

	printf("Enter the value that you want to start counting from: ");
	scanf("%d", &countStartPoint);

	printf("Iterative method result:\n");
	iterative(countStartPoint);

	printf("Recursive method result:\n");
	recursive(countStartPoint);

	return (0);
}
