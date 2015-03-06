#ifndef __TEMP_TABLE_H__
#define __TEMP_TABLE_H__

typedef struct {
	const char **fields;
	const int n_fields;
	const char *sep;
}table_t;

typedef double temperature_t;

table_t makeTable(const char *fields[], const int n_fields, const char* sep);

void printHeaders(table_t table);
void printRow(const temperature_t fahrenheit, const temperature_t celcius, const table_t table);
double toCelcius(const temperature_t fahrenheit);

#endif