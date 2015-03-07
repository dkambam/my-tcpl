/*
DEMO: See the usage of loops. 

Print a table with fahrenheit values and corresponding celcius values.
*/

#include "temperature_table.h"

int main(){
	const temperature_t START = 0;
	const temperature_t END = 200;
	const temperature_t STEP = 20;

	table_t temperatureTable;
	temperatureTable = makeTable( (const char *[]){"Fahrenheit", "Celcius"}, 2, "\t" );

	printHeaders(temperatureTable);

	for (double fahrenheit=START; fahrenheit<=END; fahrenheit += STEP){
		printRow(fahrenheit, toCelcius(fahrenheit), temperatureTable);
	}

	return 0;
}