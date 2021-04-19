#include <stdio.h>

int somme(int T[], int n){

	if(n==1){
		return(T[0]);
	}

	return(T[n-1] + somme(T, n-1));

}


int main(){

	int T[3];
	T[0] = 10;
	T[1] = 20;
	T[2] = 30;
	int result;

	result = somme(T, 3);

	printf("The result is: %d\n", result);

	return(0);
}
