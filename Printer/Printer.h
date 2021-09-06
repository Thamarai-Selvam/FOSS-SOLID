#pragma once
#include <string>
using namespace std;

class Printer
{
public:
	Printer();
	~Printer();
	string getPrinterName();
	string getPrinterID();

protected:
	string printerID;
	string printerName;
};

