#include <stdio.h>

int somme(int a, int b){
	if(a==b)
		return(a);
	return(a+somme(a+1,b));
}


int main(){

	int result, x=5, y=8;

	result=somme(x, y);

	printf("The result is: %d\n", result);

	return(0);
}
