#include<stdio.h>


int numberIsPrime(int number);


int main(){
	int n;
	
	for (n = -10; n <= 10; n++) {
		if (numberIsPrime(n)) printf("%d\n", n);
	}
	
	return 0;
}


int numberIsPrime(int number) {
	int i;
	
	if (number <= 1) return 0;

	for (i = 2; i < number; i++) {
		if (number % i == 0) return 0;
	}

	return 1;
}