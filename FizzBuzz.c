#include "FizzBuzz.h"
#include <stdio.h>
#include <stdlib.h>

char* fizzbuzz(int x){
	char* str = malloc(24*sizeof(char));;		
	if ((x % 3 == 0) && (x % 5 == 0))
		return "fizzbuzz";	
	else if (x % 3 == 0)
		return "fizz";
	else if (x % 5 == 0)
		return "buzz";	
	else{
		sprintf(str,"%d", x);		
		return str;
	}
}
