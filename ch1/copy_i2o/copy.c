#include <stdio.h>

int main(){

	while(1){
		char c; 
		if( (c = getchar()) != EOF ) // notice the idiom
			putchar(c);
	}

	return 0;
}


