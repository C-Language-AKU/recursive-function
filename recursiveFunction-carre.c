#include <stdio.h>

/***************** Iterative Function *****************/
int iterativeCarre(int num){

	int sum, square;
	sum=0;

	for(int count=0; count<=num; count++){
		square = count * count;
		sum = sum + square;
	}

	return sum;
}

/***************** Recursive Function *****************/
int carre(int num){

	int sum, square, s;

	if(num>=1){
		sum = num * num + carre(num-1);
	}

	return sum;
}


/******************** Main Program ********************/
int main(){

	int n, squareSum, squareSumRecursive;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	squareSum = iterativeCarre(n);

	printf("The sum of the square of the first %d numbers is: %d.\n", n, squareSum);

	squareSumRecursive = carre(n);

	printf("The sum of the square of the first %d numbers calculated in the recursive way is: %d.\n", n, squareSumRecursive);
	return (0);
}
