#include "Printer.h"

Printer::Printer()
{
	printerID = "p0";
	printerName = "Printer";
	
}

Printer::~Printer()
{
}

string Printer::getPrinterID()
{
	return printerID;
}

string Printer::getPrinterName()
{
	return printerName;
}
