#include "temperature_table.h"
#include <stdio.h>
#include <string.h>

table_t makeTable(const char *fields[], const int n_fields, const char* sep){
	table_t t = { fields, n_fields, sep};
	return t;
}

void printHeaders(table_t table){
	for(int i=0; i < table.n_fields; i++){
		printf("%s", table.fields[i]);
		if( i != table.n_fields-1 )
			printf(table.sep);
	}
	printf("\n");
}

void printRow(const temperature_t fahrenheit, const temperature_t celcius, const table_t table){
	printf("%*.1f%s%*.1f\n", (int)strlen(table.fields[0]), fahrenheit, table.sep, (int)strlen(table.fields[1]), celcius);	
}

double toCelcius(const temperature_t fahrenheit){
	return (fahrenheit - 32) * 5 / 9;
}