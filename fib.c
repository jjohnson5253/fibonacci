//Jake Johnson Summer 2016

//This program takes the first command line argument n and calculates
//the nth fibonacci number

#include <stdio.h> //printf()
#include <stdlib.h> //atoi()

//Fibonacci series starts like this:
//0,1,1,2,3,5,8,13,21,34,55,89,144,...

unsigned long long fib(int n){

	if(n==0) return 0;
	//if(n==1) return 1;

	//initalize variables at n = 1
	unsigned long long prev = 0;
	unsigned long long curr = 1;
	unsigned long long next = 1;
	
	//go through fibonacci series up to n by resetting each variable appropriately
	for(int i=1; i<n; i++){
		prev=curr;
		curr=next;
		next=prev+curr;
	}
	return curr;

	//!!**this program works up to 93 but no higher because of overflow
	
}

//argc contains number of arguments, argv is an array of pointers pointing to the arguments
//stands for argument count and argument vector
//argv[0] is the string "./a.out", argv[1] is the first argument given
//argv is an array of an array so you have to dereference twice
int main( int argc, char ** argv){

	//take the first argument as the fibonacci number to be found
	int n = atoi(argv[1]);

	printf("Fibonacci number %d is %llu \n", n, fib(n));

	return 0;
}