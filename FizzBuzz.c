#include "FizzBuzz.h"
#include <stdio.h>
#include <stdlib.h>

char* fizzbuzz(int x){
	char* str = malloc(24*sizeof(char));;		
	if (x % 3 == 0)
		return "fizz";
	else{
		sprintf(str,"%d", x);		
		return str;
	}
}
