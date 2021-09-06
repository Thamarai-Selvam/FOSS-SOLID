#include "HPLazerPrinter.h"

HPLazerPrinter::HPLazerPrinter()
{
	printerID = "p1";
	printerName = "HP Lazer Printer";
}

HPLazerPrinter::~HPLazerPrinter()
{
}

string HPLazerPrinter::getPrinterID()
{
	return printerID;
}


string HPLazerPrinter::getPrinterName()
{
	return printerName;
}
