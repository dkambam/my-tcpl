/*
DEMO: See the usage of loops. 

Print a table with fahrenheit values and corresponding celcius values.
*/

#include <stdio.h>
#include <string.h>


void printHeaders(const char *fields[], const int n_fields, const char *sep);
void printRow(const int fahrenheit, const int celcius, const char *fields[], const char* sep);

int main(){

	const char *fields[] = {"Fahrenheit", "Celcius"};
	const int n_fields = 2;
	const char *sep = "\t";

	printHeaders(fields, n_fields, sep);

	int fahrenheit = 10, celcius = 12;
	printRow(fahrenheit, celcius, fields, sep);

	return 0;
}

void printHeaders(const char *fields[], const int n_fields, const char *sep){
	for(int i=0; i<n_fields; i++){
		printf("%s", fields[i]);
		if( i != n_fields-1 )
			printf(sep);
	}
	printf("\n");
}

void printRow(const int fahrenheit, const int celcius, const char *fields[], const char* sep){
	printf("%*d\t%*d\n", (int)strlen(fields[0]), fahrenheit, (int)strlen(fields[1]), celcius);	
}