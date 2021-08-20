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

    m_logFile = string("Log" + string(Logger::getDay()) + ".log");
}

string Logger::logStartLine()
{
    string timeNow = "[" + Logger::getDateAndTime() + "] - [Logger]";

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
    string logMsg = "["+ Logger::getDateAndTime() + "] - [" + moduleName + "] - " + message;

    if (outfile << logMsg << endl) {
        outfile.close();
        return true;
    }


    outfile.close();
    return false;
}


string Logger::getDay()
{
    char yyyymmdd[256];
    tm* ltm = Logger::getCurrTime();
    strftime(yyyymmdd, sizeof(yyyymmdd), "%Y%m%d ", ltm);

    return string(yyyymmdd);
}

tm* Logger::getCurrTime()
{
    time_t now = time(0);
    tm* ltm = localtime(&now);

    return ltm;
}

string Logger::getDateAndTime()
{
    char dateAndTime[256];
    tm* ltm = getCurrTime();
    strftime(dateAndTime, sizeof(dateAndTime), "%d-%m-%Y %H:%M:%S", ltm);
    return string(dateAndTime);
}

string Logger::getYear()
{
    return to_string(getCurrTime()->tm_year);
}

string Logger::getMonth()
{
    return to_string(getCurrTime()->tm_mon);
}

string Logger::getDate()
{
    return to_string(getCurrTime()->tm_mday);
}
