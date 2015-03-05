#ifndef __TEMP_TABLE_H__
#define __TEMP_TABLE_H__

typedef struct {
	const char **fields;
	const int n_fields;
	const char *sep;
}table_t;

table_t makeTable(const char *fields[], const int n_fields, const char* sep);

void printHeaders(table_t table);
void printRow(const double fahrenheit, const double celcius, const table_t table);

double toCelcius(const double fahrenheit);

#endif