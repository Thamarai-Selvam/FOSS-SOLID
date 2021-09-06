#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include "../Logger/Time.h"
#include "../Logger/Logger.h"
#include "../Calculator/Calculator.h"
#include "../VideoAlgo/AlgoSetter.h"
#include "../VideoAlgo/eAlgo.h"

#include "../VideoAlgo_OCP/IVideoAlgo.h"
#include "../VideoAlgo_OCP/SDVideoAlgo.h"
#include "../VideoAlgo_OCP/HDVideoAlgo.h"
#include "../Printer/Printer.h"
#include "../Printer/HPLazerPrinter.h"
//#include "../Birds/Duck.h"
//#include "../Birds/Penguin.h"
#include "../BirdsRev/Duck.h"
#include "../BirdsRev/Penguin.h"

using namespace std;

void runSingleResposibility();
void runOpenClosed();
void runLiskovSubstitution();
void runLiskovSubstitutionNew();
void runInterfaceSegregation();
void runDependecyInversion();


int main()
{
    
    //runSingleResposibility();
    runOpenClosed();
    //runLiskovSubstitution();
    runLiskovSubstitutionNew();
}

// Demonstrates Single Responsibility Principle
void runSingleResposibility()
{
    
    cout << "Time Now : " << Time::getDateAndTime() << endl;
    Logger* logger = logger->getInstance();
    logger->Log("SOLID::main", "Got logger instance in Solid::Main");

    //Call calculator
    cout << Calculator::fnCalculator(1, '+', 1) << endl;
}

// Demonstrates Open Closed Principle
void runOpenClosed()
{
   //VideoQuality
    AlgoSetter* algoSetter = new AlgoSetter(VideoQuality::e_Quality::m_FHD);
    cout << algoSetter->getVideoData().Quality << endl;

    AlgoSetter* algoSetter2 = new AlgoSetter(VideoQuality::e_Quality::m_SD);
    cout << algoSetter2->getVideoData().Quality << endl;
    //--------------------------------------------------
    //SDVideoAlgo 
    SDVideoAlgo* SDQual = new SDVideoAlgo();
    cout << "class : SDVideoAlgo " << SDQual->getVideoData().Quality << endl;

    //HDVideoAlgo 
    HDVideoAlgo* HDQual = new HDVideoAlgo();
    cout << "class : HDVideoAlgo " << HDQual->getVideoData().Quality << endl;


    delete algoSetter; delete algoSetter2; delete SDQual; delete HDQual;
}

// Demonstrates Liskov Substituion Principle
void runLiskovSubstitution()
{
   
    Printer* printer = new Printer();
    cout << "class : Printer " << printer->getPrinterName() << endl;

    HPLazerPrinter* HPprinter = new HPLazerPrinter();
    cout << "class : HPLazerPrinter " << HPprinter->getPrinterName() << endl;

    Printer* newPrinter = new HPLazerPrinter();
    cout << "class : HPLazerPrinter " << newPrinter->getPrinterName() << endl;

}

// Demonstrates Liskov Substituion Principle via a more simpler example
void runLiskovSubstitutionNew()
{

    Duck* duck = new Duck();
    duck->fly();

    Penguin* penguin = new Penguin();
    //penguin->swim();
    penguin->fly();



}

// Demonstrates Interface Segregation Principle
void runInterfaceSegregation()
{
}

// Demonstrates DependecyInversion Principle
void runDependecyInversion()
{
}
