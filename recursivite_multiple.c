#include <stdio.h>

int suite(int n){

	if(n==0){
		return (0);
	}

	if(n==1){
		return (1);
	}

	else{
		return (suite(n-1) + suite(n-2));
	}

}


int main(){

	int x, result;
	x=5;

	result = suite(x);

	printf("the result is: %d\n", result);

	return(0);
}


