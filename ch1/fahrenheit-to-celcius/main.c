/*
DEMO: See the usage of loops. 

Print a table with fahrenheit values and corresponding celcius values.
*/

#include "temperature_table.h"

int main(){
	table_t temperatureTable;
	temperatureTable = makeTable( (const char *[]){"Fahrenheit", "Celcius"}, 2, "\t" );

	printHeaders(temperatureTable);

	for (double fahrenheit=0; fahrenheit<=200; fahrenheit += 20){
		printRow(fahrenheit, toCelcius(fahrenheit), temperatureTable);
	}

	return 0;
}