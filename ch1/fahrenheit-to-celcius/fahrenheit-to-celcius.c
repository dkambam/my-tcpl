/*
DEMO: See the usage of loops. 

Print a table with fahrenheit values and corresponding celcius values.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
	const char **fields;
	const int n_fields;
	const char *sep;
}table_t;


void printHeaders(table_t table);
void printRow(const double fahrenheit, const double celcius, const char *fields[], const char* sep);
double toCelcius(const double fahrenheit);
table_t makeTable(const char *fields[], const int n_fields, const char* sep);

int main(){


	table_t temperatureTable;
	temperatureTable = makeTable( (const char *[]){"Fahrenheit", "Celcius"}, 2, "\t" );

	printHeaders(temperatureTable);

	for (double fahrenheit=0; fahrenheit<=200; fahrenheit += 20){
		printRow(fahrenheit, toCelcius(fahrenheit), temperatureTable.fields, temperatureTable.sep);
	}
	

	return 0;
}


double toCelcius(const double fahrenheit){
	return (fahrenheit - 32) * 5 / 9;
}

void printHeaders(table_t table){
	for(int i=0; i < table.n_fields; i++){
		printf("%s", table.fields[i]);
		if( i != table.n_fields-1 )
			printf(table.sep);
	}
	printf("\n");
}

void printRow(const double fahrenheit, const double celcius, const char *fields[], const char* sep){
	printf("%*.1f\t%*.1f\n", (int)strlen(fields[0]), fahrenheit, (int)strlen(fields[1]), celcius);	
}

table_t makeTable(const char *fields[], const int n_fields, const char* sep){
	table_t t = { fields, n_fields, sep};
	return t;
}