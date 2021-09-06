#pragma once
#include "Printer.h"

class HPLazerPrinter : public Printer
{
public:
	HPLazerPrinter();
	~HPLazerPrinter();
	string getPrinterName();
	string getPrinterID();

private:

};

