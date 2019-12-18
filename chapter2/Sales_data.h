// #ifndef test will succeed at first time
// use this facility to guard against multiple inclusion
// best practices: always guard the headers
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif