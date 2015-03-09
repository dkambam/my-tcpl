#include <stdio.h>
#include "bool.h"
int main(){

	while(true){
		char c; 
		if( (c = getchar()) != EOF ) // notice the idiom
			putchar(c);
	}

	return 0;
}


