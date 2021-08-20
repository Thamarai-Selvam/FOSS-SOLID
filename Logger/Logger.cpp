#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>  
#include "Logger.h"
#include "Time.h"

using namespace std;


Logger* Logger::m_Logger = nullptr;

Logger::Logger()
{
    cout << "Logger instance created!\n";
    generateLogFile();
    Log("Logger", "Logger Started");
}
    
Logger::~Logger()
{
}

string Logger::getLogFile()
{
    return m_logFile;
}

void Logger::generateLogFile()
{
    generateLogFileName();

    ofstream outfile(getLogFile(), std::ios::out | std::ios::app);

    outfile << logStartLine() << std::endl;

    outfile.close();

}

void Logger::generateLogFileName()
{

    m_logFile = string("Log" + string(Time::getDay()) + ".log");
}

string Logger::logStartLine()
{
    string timeNow = "[" + Time::getDateAndTime() + "] - [Logger]";

    return string(timeNow + " " + "Log Instantiated");
}

Logger* Logger::getInstance()
{

    return (m_Logger == nullptr) ?
        m_Logger = new Logger :
        m_Logger;
}

bool Logger::Log(string moduleName, string message)
{
    ofstream outfile(Logger::getLogFile(), std::ios::app);
    string logMsg = "["+ Time::getDateAndTime() + "] - [" + moduleName + "] - " + message;

    if (outfile << logMsg << endl) {
        outfile.close();
        return true;
    }


    outfile.close();
    return false;
}