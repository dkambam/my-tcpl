/*
DEMO: See the usage of loops. 

Print a table with fahrenheit values and corresponding celcius values.
*/

#include <stdio.h>
#include <string.h>


void printHeaders(const char *fields[], const int n_fields, const char *sep);
void printRow(const int fahrenheit, const int celcius, const char *fields[], const char* sep);
int toCelcius(const int fahrenheit);

int main(){

	const char *fields[] = {"Fahrenheit", "Celcius"};
	const int n_fields = 2;
	const char *sep = "\t";

	printHeaders(fields, n_fields, sep);

	for (int fahrenheit=0; fahrenheit<=200; fahrenheit += 20){
		printRow(fahrenheit, toCelcius(fahrenheit), fields, sep);
	}
	

	return 0;
}


int toCelcius(const int fahrenheit){
	return (fahrenheit - 32) * 5 / 9;
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