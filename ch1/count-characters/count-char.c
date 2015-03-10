#include <stdio.h>
#include "bool.h"

int main(){
	long count = 0;
	while(true){
		char c;
		if( (c = getchar()) == EOF )
			break;
		count++;
	}

	printf("char count: %ld\n", count);
}