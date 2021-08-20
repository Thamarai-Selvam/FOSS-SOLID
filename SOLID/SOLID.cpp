#include <iostream>
#include "../Logger/Time.h"
#include "../Logger/Logger.h"
#include "../Calculator/Calculator.h"
#include "../VideoAlgo/AlgoSetter.h"
#include "../VideoAlgo/eAlgo.h"

using namespace std;

int main()
{
    cout << "Time Now : " << Time::getDateAndTime()<<endl;
    Logger* logger = logger->getInstance();
    logger->Log("SOLID::main", "Got logger instance in Solid::Main");

    //Call calculator
    cout << Calculator::fnCalculator(1, '+', 1) << endl;


    //VideoQuality
    AlgoSetter* algoSetter = new AlgoSetter(VideoQuality::e_Quality::m_FHD);
    cout << algoSetter->getPixels().Quality<<endl;

    AlgoSetter* algoSetter2 = new AlgoSetter(VideoQuality::e_Quality::m_SD);
    cout << algoSetter2->getPixels().Quality<<endl;
    

}
 