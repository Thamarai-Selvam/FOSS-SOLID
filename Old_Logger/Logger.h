#pragma once
#include "pch.h"

#pragma warning(disable : 4996)

using namespace std;

class Logger 
{
public:
    static Logger* getInstance();
    bool Log(string moduleName, string message);
    static string getDay();
    static tm* getCurrTime();
    static string getDateAndTime();
    static string getYear();
    static string getMonth();
    static string getDate();
private:
    // private constructor and destructor
    Logger();
    ~Logger();

    // private copy constructor and assignment operator
    Logger(const Logger&);
    Logger& operator=(const Logger&);

    //util functions
    string getLogFile();
    void generateLogFile();
    void generateLogFileName();
    string logStartLine();

    //data members
    static Logger* m_Logger;
    string m_logFile;

    friend class ILog;
};


